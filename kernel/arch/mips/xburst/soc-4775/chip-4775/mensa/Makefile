
obj-y += misc.o regulator.o sound.o

ifdef CONFIG_BM347WV_F_8991FTGF_HX8369
obj-$(CONFIG_FB_JZ4780_LCDC0)		+= lcd-8991.o
else
obj-$(CONFIG_FB_JZ4780_LCDC0)		+= lcd.o
endif
obj-$(CONFIG_FB_JZ4775_ANDROID_EPD)	+= mensa-epd.o
obj-$(CONFIG_MTD_NAND_JZ4775)		+= nand-mtd.o
obj-$(CONFIG_MMC_JZ4775)		+= mmc.o
obj-$(CONFIG_BCM4330_RFKILL)		+= bt.o
ifdef CONFIG_SLCD_SUSPEND_ALARM_WAKEUP_REFRESH
obj-y += pm_slcd.o
else
obj-y += pm.o
endif
obj-$(CONFIG_VIDEO_JZ4780_CIM_HOST)     += mensa-cim.o
