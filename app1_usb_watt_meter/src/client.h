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

#ifndef _CLIENT_H_
#define _CLIENT_H_

typedef struct client_info_t {
	char client_id[80];
	char project_id[32];
	char auth_uri[64];
	char token_uri[48];
	char auth_provider_x509_cert_url[48];
	char client_secret[32];
	char redirect_uris[2][32];
} client_info_t;

typedef struct credential_t {
	char device_code[100];
	char user_code[12];
	int expires_in;
	int interval;
	char verification_url[32];
	char access_token[132];
	char refresh_token[64];
	char scope[64];
	char token_type[16];
} credential_t;

typedef struct error_response_t {
	char error[64];
	char error_description[64];
} error_response_t;

typedef struct drive_file_t {
	char kind[32];
	char id[36];
	char name[256];
	char mimeType[40];
} drive_file_t;

typedef enum google_drive_parse_state_t {
	psRoot,
	psInstalled,
	psClientId,
	psProjectId,
	psAuthUri,
	psTokenUri,
	psAuthProviderX509CertUrl,
	psClientSecret,
	psRedirectUris,
	psDeviceCode,
	psUserCode,
	psExpiresIn,
	psInterval,
	psVerificationUrl,
	psAccessToken,
	psRefreshToken,
	psScope,
	psTokenType,
	psKind,
	psId,
	psName,
	psMimeType,
	psError,
	psErrorDescription,
} google_drive_parse_state_t;

struct jsonsl_st;
typedef struct jsonsl_st *jsonsl_t;

typedef void (*parser_callback_t)(struct google_drive_t *gd, struct jsonsl_state_st *state, const char *buf);

typedef struct google_drive_t {
	client_info_t client_info;
	credential_t credential;
	drive_file_t file;
	error_response_t error;
	jsonsl_t jsn;
	google_drive_parse_state_t state;
	int index;
	char fname[sizeof("1:/log/20160101000000.log")];
	char jsn_buf[256];
	int jsn_buf_pos;
	parser_callback_t start;
	parser_callback_t end;
} google_drive_t;

extern google_drive_t google_drive;

void client_init(void);
void client_final(void);

void client_set_client_id(const char *client_id);
void client_set_client_secret(const char *client_secret);
int client_get_device_id(int argc, char **argv);
int client_get_access_token(int argc, char **argv);
int client_update_access_token(int argc, char **argv);
int client_revoke(int argc, char **argv);
int client_upload_file(int argc, char **argv);

#endif /* _CLIENT_H_ */
