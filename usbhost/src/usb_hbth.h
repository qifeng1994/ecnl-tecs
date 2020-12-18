#ifndef usb_hbth_h
#define usb_hbth_h

#include <sil.h>
//#include "devdrv_intc.h"
#define INTC_ID_USBI0 73

/*
 *  USB HOST タスクのための定数
 */
#define USBHOST_PRIORITY			(4)
#define USBHOST_STACK_SIZE			2048

enum task_event_t {
	TASK_EVENT_START,
	TASK_EVENT_TERMINATE,
	TASK_EVENT_WAKEUP,
	TASK_EVENT_TIMEOUT,
	TASK_EVENT_TICK = 0x80,
};

struct task_if_t {
	void (*on_start)(struct task_if_t *task, ID tskid);
	void (*on_end)(struct task_if_t *task);
	int (*get_timer)(struct task_if_t *task);
	void (*progress)(struct task_if_t *task, int elapse);
	void (*process)(struct task_if_t *task, enum task_event_t event);
};

extern struct task_if_t bt_task;

void usbhost_init(ID tskid);
void usbhost_main(intptr_t exinf);

/*
 *  USB割込みハンドラ登録のための定数
 */
#define INHNO_USB	INTC_ID_USBI0		/* 割込みハンドラ番号 */
#define INTNO_USB	INTC_ID_USBI0		/* 割込み番号 */
#define INTPRI_USB	-5					/* 割込み優先度 */
#define INTATR_USB	(TA_EDGE)			/* 割込み属性 */

void usb_interrupt_handler(void);
int bt_usb_hbth_bulk_write(unsigned char *packet, int size);
int bt_usb_hbth_control_write(unsigned char *packet, int size);

#endif // usb_hbth_h
