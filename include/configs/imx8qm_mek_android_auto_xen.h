/*
 * Copyright 2018 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef IMX8QM_MEK_ANDROID_AUTO_XEN_H
#define IMX8QM_MEK_ANDROID_AUTO_XEN_H

#undef CFG_SYS_SDRAM_BASE
#undef PHYS_SDRAM_1
#undef PHYS_SDRAM_2
#undef PHYS_SDRAM_1_SIZE
#undef PHYS_SDRAM_2_SIZE

#define CFG_SYS_SDRAM_BASE		0x40000000
#define PHYS_SDRAM_1			0x40000000
#define PHYS_SDRAM_2			0x200000000
#define PHYS_SDRAM_1_SIZE		0xC0000000	/* 3 GB */
#define PHYS_SDRAM_2_SIZE		0x20000000	/* 512 MB */

/* This needs to be stay same in iomem in domu.cfg */
#define SC_IPC_CH			0x15d1d0000

#endif /* IMX8QM_MEK_ANDROID_AUTO_XEN_H */