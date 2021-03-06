/* kernel_cfg.h */
#ifndef TOPPERS_KERNEL_CFG_H
#define TOPPERS_KERNEL_CFG_H

#define TNUM_DOMID	1
#define TNUM_TSKID	60
#define TNUM_SEMID	30
#define TNUM_FLGID	19
#define TNUM_DTQID	16
#define TNUM_PDQID	16
#define TNUM_MTXID	20
#define TNUM_MPFID	0
#define TNUM_CYCID	20
#define TNUM_ALMID	1
#define TNUM_ISRID	1

#define TMAX_FNCD	TFN_SPP_MASTER_TEST_CONNECT

#define TDOM_APP	1
#define LOGTASK	1
#define BRICK_BTN_TSK	2
#define LCD_REFRESH_TSK	3
#define CONSOLE_BTN_TSK	4
#define BT_TSK	5
#define BT_QOS_TSK	6
#define USBMSC_TSK	7
#define EV3_INIT_TASK	8
#define PLATFORM_BUSY_TASK	9
#define EV3RT_LOGTASK	10
#define APP_INIT_TASK	11
#define TSKID_tTask_Task	12
#define SERIAL_RCV_SEM1	1
#define SERIAL_SND_SEM1	2
#define SERIAL_RCV_SEM2	3
#define SERIAL_SND_SEM2	4
#define SERIAL_RCV_SEM3	5
#define SERIAL_SND_SEM3	6
#define SERIAL_RCV_SEM4	7
#define SERIAL_SND_SEM4	8
#define MMCSD_MOD_SEM	9
#define FATFS_SEM	10
#define LCD_DMA_DONE_SEM	11
#define SUART1_SEM	12
#define SUART2_SEM	13
#define SND_DEV_SEM	14
#define BTN_CLICK_FLG	1
#define CONSOLE_BTN_CLICK_FLG	2
#define USBMSC_EVT_FLG	3
#define DISKIO_MTX	1
#define EV3RT_CONSOLE_MTX	2
#define EV3RT_CONSOLE_LOG_MTX	3
#define BT_DB_MTX	4
#define BT_SIO_CYC	1
#define DBSIO_TEST_SPP_MASTER_SIO_CYC	2
#define BRICK_BTN_CYC	3
#define BT_DMA_CYC	4
#define SND_STOP_ALM	1

#endif /* TOPPERS_KERNEL_CFG_H */

