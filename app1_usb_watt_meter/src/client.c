/*
 *  TOPPERS PROJECT Home Network Working Group Software
 *
 *  Copyright (C) 2016-2019 Cores Co., Ltd. Japan
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 *
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 *
 *  @(#) $Id$
 */
#include <lib/curl_config.h>
#include <lib/curl_setup.h>
#include <curl/curl.h>
#include <wolfssl/wolfcrypt/wc_port.h>
//#include <wolfssl/ssl.h>
//#include <sys/socket.h>
#include <string.h>
#include <kernel.h>
#include <t_syslog.h>
#include "echonet_main.h"
#include "kernel_cfg.h"
#include "ff.h"
#include <stdio.h>
#include "client.h"
#include "jsonsl.h"

#define SKIP_PEER_VERIFICATION
//#define SKIP_HOSTNAME_VERIFICATION

const char SCOPE_DRIVE_FILE[] = "https://www.googleapis.com/auth/drive.file";
const char GRANT_TYPE_DEVICE[] = "http://oauth.net/grant_type/device/1.0";

char response[80];
char errbuf[CURL_ERROR_SIZE];

google_drive_t google_drive;

int read_client_info(google_drive_t *gd, const char *fname);
void curl_setopt_common(CURL *curl);
int google_drive_error_callback(jsonsl_t jsn, jsonsl_error_t err,
	struct jsonsl_state_st *state, char *errat);
void google_drive_state_callback(jsonsl_t jsn, jsonsl_action_t action,
	struct jsonsl_state_st *state, const char *buf);

void client_init(void)
{
	google_drive_t *gd = &google_drive;

	memset(gd, 0, sizeof(google_drive_t));
	memcpy(gd->fname, "1:/log/20160101000000.log", sizeof(gd->fname));

	read_client_info(gd, "1:/client_secret.json");

	curl_global_init(CURL_GLOBAL_DEFAULT);
}

size_t write_callback(void *buffer, size_t size, size_t nmemb, void *arg)
{
	google_drive_t *gd = (google_drive_t *)arg;
	jsonsl_t jsn = gd->jsn;
	size_t len = size * nmemb, pos;
	jsonsl_char_t data;

	for (pos = 0; pos < len; pos++) {
		data = *((jsonsl_char_t *)&((uint8_t *)buffer)[pos]);

		if ((gd->jsn_buf_pos >= 0) && (gd->jsn_buf_pos < sizeof(gd->jsn_buf)))
			gd->jsn_buf[gd->jsn_buf_pos++] = data;
		jsonsl_feed(jsn, &data, 1);
	}

	return len;
}

void client_info_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
	switch (gd->state) {
	case psRoot:
		if (state->level != 2) {
			break;
		}
		else if (strcmp(buf, "installed") == 0) {
			gd->state = psInstalled;
		}
		break;
	case psInstalled:
		if (state->level == 2) {
			gd->state = psRoot;
			break;
		}
		if (state->level != 3) {
			break;
		}
		else if (strcmp(buf, "client_id") == 0) {
			gd->state = psClientId;
		}
		else if (strcmp(buf, "project_id") == 0) {
			gd->state = psProjectId;
		}
		else if (strcmp(buf, "auth_uri") == 0) {
			gd->state = psAuthUri;
		}
		else if (strcmp(buf, "token_uri") == 0) {
			gd->state = psTokenUri;
		}
		else if (strcmp(buf, "auth_provider_x509_cert_url") == 0) {
			gd->state = psAuthProviderX509CertUrl;
		}
		else if (strcmp(buf, "client_secret") == 0) {
			gd->state = psClientSecret;
		}
		else if (strcmp(buf, "redirect_uris") == 0) {
			gd->state = psRedirectUris;
			gd->index = 0;
		}
		break;
	case psClientId:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.client_id, buf, sizeof(gd->client_info.client_id));
			gd->state = psInstalled;
		}
		break;
	case psProjectId:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.project_id, buf, sizeof(gd->client_info.project_id));
			gd->state = psInstalled;
		}
		break;
	case psAuthUri:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.auth_uri, buf, sizeof(gd->client_info.auth_uri));
			gd->state = psInstalled;
		}
		break;
	case psTokenUri:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.token_uri, buf, sizeof(gd->client_info.token_uri));
			gd->state = psInstalled;
		}
		break;
	case psAuthProviderX509CertUrl:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.auth_provider_x509_cert_url, buf, sizeof(gd->client_info.auth_provider_x509_cert_url));
			gd->state = psInstalled;
		}
		break;
	case psClientSecret:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.client_secret, buf, sizeof(gd->client_info.client_secret));
			gd->state = psInstalled;
		}
		break;
	case psRedirectUris:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->client_info.redirect_uris[gd->index], buf, sizeof(gd->client_info.redirect_uris[0]));
			gd->index++;
			if (gd->index == 2) {
				gd->state = psInstalled;
			}
		}
		break;
	}
}

void client_info_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

int read_client_info(google_drive_t *gd, const char *fname)
{
	FIL file;
	FRESULT ret;
	jsonsl_t jsn = gd->jsn = jsonsl_new(5);
	char buffer[16];
	size_t len, pos;
	jsonsl_char_t data;

	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = client_info_state_start;
	gd->end = client_info_state_end;
	gd->state = psRoot;

	ret = f_open(&file, fname, FA_READ);
	if (ret != FR_OK) {
		printf("not open %s file %d\n", fname, ret);
		ret = -1;
		goto error;
	}

	for (;;) {
		len = 0;
		ret = f_read(&file, buffer, sizeof(buffer), &len);
		if ((ret != FR_OK) || (len <= 0))
			break;

		for (pos = 0; pos < len; pos++) {
			data = *((jsonsl_char_t *)&((uint8_t *)buffer)[pos]);

			if ((gd->jsn_buf_pos >= 0) && (gd->jsn_buf_pos < sizeof(gd->jsn_buf)))
				gd->jsn_buf[gd->jsn_buf_pos++] = data;
			jsonsl_feed(jsn, &data, 1);
		}
	}

	f_close(&file);

	ret = 0;
error:
	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	return ret;
}

void get_device_id_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
	switch (gd->state) {
	case psRoot:
		if (state->level != 2) {
			break;
		}
		else if (strcmp(buf, "device_code") == 0) {
			gd->state = psDeviceCode;
		}
		else if (strcmp(buf, "user_code") == 0) {
			gd->state = psUserCode;
		}
		else if (strcmp(buf, "expires_in") == 0) {
			gd->state = psExpiresIn;
		}
		else if (strcmp(buf, "interval") == 0) {
			gd->state = psInterval;
		}
		else if (strcmp(buf, "verification_url") == 0) {
			gd->state = psVerificationUrl;
		}
		else if (strcmp(buf, "error") == 0) {
			gd->state = psError;
		}
		else if (strcmp(buf, "error_description") == 0) {
			gd->state = psErrorDescription;
		}
		break;
	case psDeviceCode:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.device_code, buf, sizeof(gd->credential.device_code));
			gd->state = psRoot;
		}
		break;
	case psUserCode:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.user_code, buf, sizeof(gd->credential.user_code));
			gd->state = psRoot;
		}
		break;
	case psExpiresIn:
		if (state->type == JSONSL_T_SPECIAL) {
			gd->credential.expires_in = atoi(buf);
			gd->state = psRoot;
		}
		break;
	case psInterval:
		if (state->type == JSONSL_T_SPECIAL) {
			gd->credential.interval = atoi(buf);
			gd->state = psRoot;
		}
		break;
	case psVerificationUrl:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.verification_url, buf, sizeof(gd->credential.verification_url));
			gd->state = psRoot;
		}
		break;
	case psError:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error, buf, sizeof(gd->error.error));
			gd->state = psRoot;
		}
		break;
	case psErrorDescription:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error_description, buf, sizeof(gd->error.error_description));
			gd->state = psRoot;
		}
		break;
	}
}

void get_device_id_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

int get_device_id(google_drive_t *gd, const char *scope)
{
	client_info_t *client_info = &gd->client_info;
	credential_t *credential = &gd->credential;
	CURLcode ret;
	CURL *curl;
	struct curl_slist *slist1;
	size_t len;
	char *postdata;

	len = strnlen(client_info->client_id, sizeof(client_info->client_id));
	if (len == 0)
		return -1;

	jsonsl_t jsn = gd->jsn = jsonsl_new(3);
	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = get_device_id_state_start;
	gd->end = get_device_id_state_end;
	gd->state = psRoot;

	slist1 = NULL;
	slist1 = curl_slist_append(slist1, "Content-Type: application/x-www-form-urlencoded");

	curl = curl_easy_init();

	char *client_id = curl_easy_escape(curl, client_info->client_id, len);
	char *esc_scope = curl_easy_escape(curl, scope, strlen(scope));

	len = sizeof("client_id=") + strlen(client_id) + sizeof("scope=") + strlen(esc_scope);
	postdata = malloc(len);
	snprintf(postdata, len, "client_id=%s&scope=%s", client_id, esc_scope);

	curl_free(client_id);
	curl_free(esc_scope);

	curl_easy_setopt(curl, CURLOPT_URL, "https://accounts.google.com/o/oauth2/device/code");
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)strnlen(postdata, len));
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
	curl_setopt_common(curl);

	curl_easy_setopt(curl, CURLOPT_WRITEDATA, gd);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

	ret = curl_easy_perform(curl);

	free(postdata);

	curl_easy_cleanup(curl);
	curl = NULL;
	curl_slist_free_all(slist1);
	slist1 = NULL;

	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	return (int)ret;
}

void get_access_token_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
	switch (gd->state) {
	case psRoot:
		if (state->level != 2) {
			break;
		}
		else if (strcmp(buf, "access_token") == 0) {
			gd->state = psAccessToken;
		}
		else if (strcmp(buf, "expires_in") == 0) {
			gd->state = psExpiresIn;
		}
		else if (strcmp(buf, "refresh_token") == 0) {
			gd->state = psRefreshToken;
		}
		else if (strcmp(buf, "scope") == 0) {
			gd->state = psScope;
		}
		else if (strcmp(buf, "token_type") == 0) {
			gd->state = psTokenType;
		}
		else if (strcmp(buf, "error") == 0) {
			gd->state = psError;
		}
		else if (strcmp(buf, "error_description") == 0) {
			gd->state = psErrorDescription;
		}
		break;
	case psAccessToken:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.access_token, buf, sizeof(gd->credential.access_token));
			gd->state = psRoot;
		}
		break;
	case psExpiresIn:
		if (state->type == JSONSL_T_SPECIAL) {
			gd->credential.expires_in = atoi(buf);
			gd->state = psRoot;
		}
		break;
	case psRefreshToken:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.refresh_token, buf, sizeof(gd->credential.refresh_token));
			gd->state = psRoot;
		}
		break;
	case psScope:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.scope, buf, sizeof(gd->credential.scope));
			gd->state = psRoot;
		}
		break;
	case psTokenType:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.token_type, buf, sizeof(gd->credential.token_type));
			gd->state = psRoot;
		}
		break;
	case psError:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error, buf, sizeof(gd->error.error));
			gd->state = psRoot;
		}
		break;
	case psErrorDescription:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error_description, buf, sizeof(gd->error.error_description));
			gd->state = psRoot;
		}
		break;
	}
}

void get_access_token_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

int get_access_token(google_drive_t *gd)
{
	client_info_t *client_info = &gd->client_info;
	credential_t *credential = &gd->credential;
	CURLcode ret;
	CURL *curl;
	struct curl_slist *slist1;
	size_t len;
	char *postdata;

	len = strlen(credential->device_code);
	if (len == 0)
		return -1;

	jsonsl_t jsn = gd->jsn = jsonsl_new(3);
	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = get_access_token_state_start;
	gd->end = get_access_token_state_end;
	gd->state = psRoot;

	slist1 = NULL;
	slist1 = curl_slist_append(slist1, "Content-Type: application/x-www-form-urlencoded");

	curl = curl_easy_init();

	char *client_id = curl_easy_escape(curl, client_info->client_id, strnlen(client_info->client_id, sizeof(client_info->client_id)));
	char *client_secret = curl_easy_escape(curl, client_info->client_secret, strnlen(client_info->client_secret, sizeof(client_info->client_secret)));
	char *grant_type = curl_easy_escape(curl, GRANT_TYPE_DEVICE, strnlen(GRANT_TYPE_DEVICE, sizeof(GRANT_TYPE_DEVICE)));

	len = sizeof("client_id=") + strlen(client_id) + sizeof("client_secret=") + strlen(client_secret)
		+ sizeof("code=") + strlen(credential->device_code) + sizeof("grant_type=") + strlen(grant_type);
	postdata = malloc(len);
	snprintf(postdata, len, "client_id=%s&client_secret=%s&code=%s&grant_type=%s",
		client_id, client_secret, credential->device_code, grant_type);

	curl_free(client_id);
	curl_free(client_secret);
	curl_free(grant_type);

	curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/oauth2/v4/token");
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)strnlen(postdata, len));
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
	curl_setopt_common(curl);

	curl_easy_setopt(curl, CURLOPT_WRITEDATA, gd);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

	ret = curl_easy_perform(curl);

	free(postdata);

	curl_easy_cleanup(curl);
	curl = NULL;
	curl_slist_free_all(slist1);
	slist1 = NULL;

	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	return (int)ret;
}

void update_access_token_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
	switch (gd->state) {
	case psRoot:
		if (state->level != 2) {
			break;
		}
		else if (strcmp(buf, "access_token") == 0) {
			gd->state = psAccessToken;
		}
		else if (strcmp(buf, "expires_in") == 0) {
			gd->state = psExpiresIn;
		}
		else if (strcmp(buf, "scope") == 0) {
			gd->state = psScope;
		}
		else if (strcmp(buf, "token_type") == 0) {
			gd->state = psTokenType;
		}
		else if (strcmp(buf, "error") == 0) {
			gd->state = psError;
		}
		else if (strcmp(buf, "error_description") == 0) {
			gd->state = psErrorDescription;
		}
		break;
	case psAccessToken:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.access_token, buf, sizeof(gd->credential.access_token));
			gd->state = psRoot;
		}
		break;
	case psExpiresIn:
		if (state->type == JSONSL_T_SPECIAL) {
			gd->credential.expires_in = atoi(buf);
			gd->state = psRoot;
		}
		break;
	case psScope:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.scope, buf, sizeof(gd->credential.scope));
			gd->state = psRoot;
		}
		break;
	case psTokenType:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->credential.token_type, buf, sizeof(gd->credential.token_type));
			gd->state = psRoot;
		}
		break;
	case psError:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error, buf, sizeof(gd->error.error));
			gd->state = psRoot;
		}
		break;
	case psErrorDescription:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error_description, buf, sizeof(gd->error.error_description));
			gd->state = psRoot;
		}
		break;
	}
}

void update_access_token_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

int update_access_token(google_drive_t *gd)
{
	client_info_t *client_info = &gd->client_info;
	credential_t *credential = &gd->credential;
	CURLcode ret;
	CURL *curl;
	struct curl_slist *slist1;
	size_t len;
	char *postdata;

	len = strlen(credential->refresh_token);
	if (len == 0)
		return -1;

	jsonsl_t jsn = gd->jsn = jsonsl_new(3);
	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = update_access_token_state_start;
	gd->end = update_access_token_state_end;
	gd->state = psRoot;

	slist1 = NULL;
	slist1 = curl_slist_append(slist1, "Content-Type: application/x-www-form-urlencoded");

	curl = curl_easy_init();

	char *client_id = curl_easy_escape(curl, client_info->client_id, strnlen(client_info->client_id, sizeof(client_info->client_id)));
	char *client_secret = curl_easy_escape(curl, client_info->client_secret, strnlen(client_info->client_secret, sizeof(client_info->client_secret)));

	len = sizeof("client_id=") + strlen(client_id) + sizeof("client_secret=") + strlen(client_secret)
		+ sizeof("refresh_token=") + strlen(credential->refresh_token);
	postdata = malloc(len);
	snprintf(postdata, len, "client_id=%s&client_secret=%s&code=%s&grant_type=refresh_token",
		client_id, client_secret, credential->refresh_token);

	curl_free(client_id);
	curl_free(client_secret);

	curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/oauth2/v4/token");
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)strnlen(postdata, len));
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
	curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
	curl_setopt_common(curl);

	curl_easy_setopt(curl, CURLOPT_WRITEDATA, gd);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

	ret = curl_easy_perform(curl);

	free(postdata);

	curl_easy_cleanup(curl);
	curl = NULL;
	curl_slist_free_all(slist1);
	slist1 = NULL;

	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	return (int)ret;
}

void revoke_device_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

void revoke_device_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

int revoke_device(google_drive_t *gd)
{
	client_info_t *client_info = &gd->client_info;
	credential_t *credential = &gd->credential;
	CURLcode ret;
	CURL *curl;
	size_t len;
	struct curl_slist *slist1;
	char *postdata;

	len = strlen(credential->access_token);
	if (len == 0)
		return -1;

	jsonsl_t jsn = gd->jsn = jsonsl_new(3);
	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = revoke_device_state_start;
	gd->end = revoke_device_state_end;
	gd->state = psRoot;

	slist1 = NULL;
	slist1 = curl_slist_append(slist1, "Content-Type: application/x-www-form-urlencoded");

	curl = curl_easy_init();

	len = sizeof("token=") + strlen(credential->access_token);
	postdata = malloc(len);
	snprintf(postdata, len, "token=%s", credential->access_token);

	curl_easy_setopt(curl, CURLOPT_URL, "https://accounts.google.com/o/oauth2/revoke");
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)strnlen(postdata, len));
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
	curl_setopt_common(curl);

	curl_easy_setopt(curl, CURLOPT_WRITEDATA, gd);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

	ret = curl_easy_perform(curl);

	free(postdata);

	curl_easy_cleanup(curl);
	curl = NULL;
	curl_slist_free_all(slist1);
	slist1 = NULL;

	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	memset(credential, 0, sizeof(*credential));

	return (int)ret;
}

void upload_file_state_start(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
	switch (gd->state) {
	case psRoot:
		if (state->level != 2) {
			break;
		}
		else if (strcmp(buf, "kind") == 0) {
			gd->state = psKind;
		}
		else if (strcmp(buf, "id") == 0) {
			gd->state = psId;
		}
		else if (strcmp(buf, "name") == 0) {
			gd->state = psName;
		}
		else if (strcmp(buf, "mimeType") == 0) {
			gd->state = psMimeType;
		}
		else if (strcmp(buf, "error") == 0) {
			gd->state = psError;
		}
		else if (strcmp(buf, "error_description") == 0) {
			gd->state = psErrorDescription;
		}
		break;
	case psKind:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->file.kind, buf, sizeof(gd->file.kind));
			gd->state = psRoot;
		}
		break;
	case psId:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->file.id, buf, sizeof(gd->file.id));
			gd->state = psRoot;
		}
		break;
	case psName:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->file.name, buf, sizeof(gd->file.name));
			gd->state = psRoot;
		}
		break;
	case psMimeType:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->file.mimeType, buf, sizeof(gd->file.mimeType));
			gd->state = psRoot;
		}
		break;
	case psError:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error, buf, sizeof(gd->error.error));
			gd->state = psRoot;
		}
		break;
	case psErrorDescription:
		if (state->type == JSONSL_T_STRING) {
			strlcpy(gd->error.error_description, buf, sizeof(gd->error.error_description));
			gd->state = psRoot;
		}
		break;
	}
}

void upload_file_state_end(google_drive_t *gd, struct jsonsl_state_st *state, const char *buf)
{
}

size_t read_callback(char *buffer, size_t size, size_t nitems, void *arg)
{
	FIL *file = (FIL *)arg;
	UINT ret = 0;
	FRESULT res;

	res = f_read(file, buffer, size * nitems, &ret);
	if (res != FR_OK)
		return 0;

	int rest = ret;
	int len;

	while (rest > 0) {
		len = rest;
		if (len > (sizeof(response) - 1)) {
			len = sizeof(response) - 1;
		}

		memcpy(response, buffer, len);

		response[len] = '\0';

		printf(response);

		dly_tsk(100);

		rest -= len;
		buffer = (char *)buffer + len;
	}

	return ret;
}

int seek_callback(void *arg, curl_off_t offset, int origin)
{
	FIL *file = (FIL *)arg;
	BYTE mode;
	FRESULT ret;

	switch (origin) {
	case SEEK_SET:
		mode = F_SEEK_SET;
		break;
	case SEEK_CUR:
		mode = F_SEEK_CUR;
		break;
	case SEEK_END:
		mode = F_SEEK_END;
		break;
	default:
		return CURL_SEEKFUNC_FAIL;
	}

	ret = f_seek(file, offset, mode);
	if (ret != F_OK)
		return CURL_SEEKFUNC_FAIL;

	return CURL_SEEKFUNC_OK;
}

int upload_file(google_drive_t *gd, const char *filename, const char *localfilepath)
{
	CURLcode ret;
	CURL *curl;
	curl_mime *mime;
	curl_mimepart *part;
	struct curl_slist *slist1;
	size_t len;
	char *postdata, *authorization;
	static const char buf[] = "Expect:";
	FIL file;
	FRESULT fret;

	len = strnlen(gd->credential.access_token, sizeof(gd->credential.access_token));
	if (len <= 0)
		return -1;

	jsonsl_t jsn = gd->jsn = jsonsl_new(3);
	jsn->data = gd;
	jsn->error_callback = google_drive_error_callback;
	jsn->action_callback = google_drive_state_callback;
	jsonsl_enable_all_callbacks(jsn);

	gd->jsn_buf_pos = -1;
	gd->start = upload_file_state_start;
	gd->end = upload_file_state_end;
	gd->state = psRoot;

	fret = f_open(&file, localfilepath, FA_READ);
	if (fret != FR_OK) {
		printf("log file open error %d\n", fret);
		ret = -1;
		goto error;
	}

	len = sizeof("{\"name\":\"\"}") + strlen(filename);
	postdata = malloc(len);
	snprintf(postdata, len, "{\"name\":\"%s\"}", filename);

	curl = curl_easy_init();

	mime = curl_mime_init(curl);
	part = curl_mime_addpart(mime);
	curl_mime_name(part, "metadata");
	curl_mime_type(part, "application/json;charset=utf-8");
	curl_mime_data(part, postdata, CURL_ZERO_TERMINATED);
	free(postdata);

	part = curl_mime_addpart(mime);
	curl_mime_name(part, "file");
	curl_mime_type(part, "application/json");
	curl_mime_data_cb(part, file.fsize, read_callback, seek_callback, NULL, &file);

	len = sizeof("Authorization: Bearer ") + strnlen(gd->credential.access_token, sizeof(gd->credential.access_token));
	authorization = malloc(len);
	snprintf(authorization, len, "Authorization: Bearer %s", gd->credential.access_token);
	slist1 = NULL;
	slist1 = curl_slist_append(slist1, authorization);
	free(authorization);

	slist1 = curl_slist_append(slist1, buf);

	curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/upload/drive/v3/files?uploadType=multipart");
	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
	curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
	curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
	curl_setopt_common(curl);

	curl_easy_setopt(curl, CURLOPT_WRITEDATA, gd);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

	ret = curl_easy_perform(curl);

	curl_easy_cleanup(curl);
	curl = NULL;
	curl_mime_free(mime);
	mime = NULL;
	curl_slist_free_all(slist1);
	slist1 = NULL;

	f_close(&file);

error:
	gd->jsn = NULL;
	jsonsl_destroy(jsn);

	return (int)ret;
}

int google_drive_error_callback(jsonsl_t jsn, jsonsl_error_t err,
	struct jsonsl_state_st *state, char *errat)
{
	return 0;
}

void google_drive_state_callback(jsonsl_t jsn, jsonsl_action_t action,
	struct jsonsl_state_st *state, const char *buf)
{
	google_drive_t *gd = (google_drive_t *)jsn->data;

	switch (action) {
	case JSONSL_ACTION_PUSH:
		switch (state->type) {
		case JSONSL_T_SPECIAL:
			gd->jsn_buf[0] = *buf;
			gd->jsn_buf_pos = 1;
			break;
		case JSONSL_T_STRING:
		case JSONSL_T_HKEY:
			gd->jsn_buf_pos = 0;
			break;
		default:
			gd->jsn_buf_pos = -1;
		}
		break;
	case JSONSL_ACTION_POP:
		switch (state->type) {
		case JSONSL_T_SPECIAL:
		case JSONSL_T_STRING:
		case JSONSL_T_HKEY:
			gd->jsn_buf_pos--;
			if (gd->jsn_buf_pos < sizeof(gd->jsn_buf)) {
				gd->jsn_buf[gd->jsn_buf_pos] = '\0';
			}
			gd->start(gd, state, gd->jsn_buf);
			break;
		default:
			gd->jsn_buf[0] = '\0';
			break;
		}
		gd->jsn_buf_pos = -1;
		break;
	default:
		gd->jsn_buf_pos = -1;
		break;
	}
}

static void get_logfname(char *fname)
{
	// fname = "0:/log/2016010100000000.log"
	time_t t;
	struct tm tm;
	int tmp1, tmp2;
	char *pos = &fname[7];

	time(&t);
	gmtime_r(&t, &tm);

	/* 年 */
	tmp1 = 1900 + tm.tm_year;
	tmp2 = tmp1 / 1000;
	tmp1 -= tmp2 * 1000;
	*pos++ = '0' + tmp2;
	tmp2 = tmp1 / 100;
	tmp1 -= tmp2 * 100;
	*pos++ = '0' + tmp2;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
	/* 月 */
	tmp1 = tm.tm_mon + 1;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
	/* 日 */
	tmp1 = tm.tm_mday;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
	/* 時 */
	tmp1 = tm.tm_hour;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
	/* 分 */
	tmp1 = tm.tm_min;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
	/* 秒 */
	tmp1 = tm.tm_sec;
	tmp2 = tmp1 / 10;
	tmp1 -= tmp2 * 10;
	*pos++ = '0' + tmp2;
	*pos++ = '0' + tmp1;
}

static FRESULT write_log(char *fname)
{
	FIL file;
	FRESULT ret;

	ret = f_open(&file, fname, FA_CREATE_ALWAYS | FA_WRITE);
	if (ret != FR_OK) {
		printf("not open a upload file %d\n", ret);
		return ret;
	}

	f_printf(&file, "{\"datetime\":\"");
	for (int i = 7; i < 21; i++)
		f_putc(fname[i], &file);
	f_printf(&file, "\",");

	for (int i = 0; i < 6; i++) {
		struct watt_hour_meter_t *meter = &electric_energy_meter_data[i];
		uint32_t *log;
		int len;

		f_printf(&file, "\"channel%d\":[", i + 1);

		wai_sem(MAIN_SEMAPHORE);

		len = 48 - meter->current_pos;
		if (len > 0) {
			log = &meter->integral_electric_energy_measurement_log[meter->current_pos];
			for (int j = 1; j < len; j++) {
				f_printf(&file, "%d,", *log);
			}
			f_printf(&file, "%d", *log);
		}
		len = 48 - len;
		if (len > 0) {
			f_putc(',', &file);

			log = &meter->integral_electric_energy_measurement_log[0];
			for (int j = 1; j < len; j++) {
				f_printf(&file, "%d,", *log);
			}
			f_printf(&file, "%d", *log);
		}

		sig_sem(MAIN_SEMAPHORE);

		f_putc(']', &file);
		if (i != 5) {
			f_putc(',', &file);
		}
	}

	f_putc('}', &file);

	f_close(&file);

	return FR_OK;
}

void curl_setopt_common(CURL *curl)
{
	CURLcode res;

	/* ask libcurl to show us the verbose output */
	res = curl_easy_setopt(curl, CURLOPT_VERBOSE, true);
	if (res != CURLE_OK)
		printf("CURLOPT_VERBOSE failed: %s\n",
			curl_easy_strerror(res));

	/* set the error buffer as empty before performing a request */
	errbuf[0] = 0;

	/* provide a buffer to store errors in */
	res = curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, errbuf);
	if (res != CURLE_OK)
		printf("CURLOPT_ERRORBUFFER failed: %s\n",
			curl_easy_strerror(res));

#ifdef SKIP_PEER_VERIFICATION
	/*
	* If you want to connect to a site who isn't using a certificate that is
	* signed by one of the certs in the CA bundle you have, you can skip the
	* verification of the server's certificate. This makes the connection
	* A LOT LESS SECURE.
	*
	* If you have a CA cert for the server stored someplace else than in the
	* default bundle, then the CURLOPT_CAPATH option might come handy for
	* you.
	*/
	res = curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
	if (res != CURLE_OK)
		printf("CURLOPT_SSL_VERIFYPEER failed: %s\n",
			curl_easy_strerror(res));
#else
	res = curl_easy_setopt(curl, CURLOPT_CAINFO, "0:/certs/ca-cert.pem");
	if (res != CURLE_OK)
		printf("CURLOPT_CAINFO failed: %s\n",
			curl_easy_strerror(res));

	res = curl_easy_setopt(curl, CURLOPT_SSLCERT, "0:/certs/client-cert.pem");
	if (res != CURLE_OK)
		printf("CURLOPT_SSLCERT failed: %s\n",
			curl_easy_strerror(res));

	res = curl_easy_setopt(curl, CURLOPT_SSLKEY, "0:/certs/client-key.pem");
	if (res != CURLE_OK)
		printf("CURLOPT_SSLKEY failed: %s\n",
			curl_easy_strerror(res));
#endif

#ifdef SKIP_HOSTNAME_VERIFICATION
	/*
	* If the site you're connecting to uses a different host name that what
	* they have mentioned in their server certificate's commonName (or
	* subjectAltName) fields, libcurl will refuse to connect. You can skip
	* this check, but this will make the connection less secure.
	*/
	res = curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
	if (res != CURLE_OK)
		printf("CURLOPT_SSL_VERIFYHOST failed: %s\n",
			curl_easy_strerror(res));
#endif

	/*res = curl_easy_setopt(curl, CURLOPT_PROXY, "https://proxy.example.com:8080");
	if (res != CURLE_OK)
		printf("CURLOPT_PROXY failed: %s\n",
			curl_easy_strerror(res));*/

	res = curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
	if (res != CURLE_OK)
		printf("CURLOPT_NOPROGRESS failed: %s\n",
			curl_easy_strerror(res));

	res = curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
	if (res != CURLE_OK)
		printf("CURLOPT_MAXREDIRS failed: %s\n",
			curl_easy_strerror(res));

	res = curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);
	if (res != CURLE_OK)
		printf("CURLOPT_TCP_KEEPALIVE failed: %s\n",
			curl_easy_strerror(res));
}

void client_set_client_id(const char *client_id)
{
	google_drive_t *gd = &google_drive;

	strlcpy(gd->client_info.client_id, client_id, sizeof(gd->client_info.client_id));
}

void client_set_client_secret(const char *client_secret)
{
	google_drive_t *gd = &google_drive;

	strlcpy(gd->client_info.client_secret, client_secret, sizeof(gd->client_info.client_secret));
}

int client_get_device_id(int argc, char **argv)
{
	google_drive_t *gd = &google_drive;
	int ret;

	ret = get_device_id(gd, SCOPE_DRIVE_FILE);
	if (ret == 0) {
		printf("Device was registered. Enter the code at the following URL\n");
		printf("url:  %s\n", gd->credential.verification_url);
		printf("code: %s\n", gd->credential.user_code);
	}
	else {
		printf("Device register failed! %d\n", ret);
	}

	return ret;
}

int client_get_access_token(int argc, char **argv)
{
	google_drive_t *gd = &google_drive;
	int ret;

	ret = get_access_token(gd);
	if (ret == 0) {
		printf("Access token was give\n");
		printf("Refresh token: %s\n", gd->credential.refresh_token);
		printf("Access token: %s\n", gd->credential.access_token);
	}
	else {
		printf("Access token gain failed. %d\n", ret);
	}

	return ret;
}

int client_update_access_token(int argc, char **argv)
{
	google_drive_t *gd = &google_drive;
	int ret;

	ret = update_access_token(gd);
	if (ret == 0) {
		printf("Access token was update\n");
		printf("Access token: %s\n", gd->credential.access_token);
	}
	else {
		printf("Access token update failed. %d\n", ret);
	}

	return ret;
}

int client_revoke(int argc, char **argv)
{
	google_drive_t *gd = &google_drive;
	int ret;

	ret = revoke_device(gd);
	if (ret == 0) {
		printf("Device was revoked.\n");
	}
	else {
		printf("Device revoke failed. %d\n", ret);
	}

	return ret;
}

int client_upload_file(int argc, char **argv)
{
	google_drive_t *gd = &google_drive;
	int ret;
	FRESULT fret;
	char fname[] = { "1:/log/20160101000000.log" };

	get_logfname(fname);

	fret = write_log(fname);
	if (fret != FR_OK) {
		printf("log file write error %d\n", fret);
		return (int)fret;
	}

	ret = upload_file(gd, &fname[7], fname);
	if (ret == 0) {
		printf("%s was uploaded.\n", &fname[7]);
	}
	else {
		printf("%s upload failed. %d\n", &fname[7], ret);
	}

	return ret;
}

void client_final(void)
{
	curl_global_cleanup();
}
