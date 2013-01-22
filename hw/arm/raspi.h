/* Code copied from Linux arch/arm/mach-bcm2708/include/mach/platform.h. */

/* macros to get at IO space when running virtually */
#define IO_ADDRESS(x) (((x) & 0x0fffffff) + (((x) >> 4) & 0x0f000000) + 0xf0000000)

#define BCM2708_SDRAM_BASE 0x00000000

// TODO: 0x7e000000?
#define BCM2708_PERI_BASE  0x20000000
#define ST_BASE            (BCM2708_PERI_BASE + 0x3000)   /* System Timer */
#define DMA_BASE           (BCM2708_PERI_BASE + 0x7000)   /* DMA controller */
#define ARM_BASE           (BCM2708_PERI_BASE + 0xB000)   /* BCM2708 ARM control block */
#define PM_BASE            (BCM2708_PERI_BASE + 0x100000) /* Power Management, Reset controller and Watchdog registers */
#define GPIO_BASE          (BCM2708_PERI_BASE + 0x200000) /* GPIO */
#define UART0_BASE         (BCM2708_PERI_BASE + 0x201000) /* Uart 0 */
#define MMCI0_BASE         (BCM2708_PERI_BASE + 0x202000) /* MMC interface */
#define UART1_BASE         (BCM2708_PERI_BASE + 0x215000) /* Uart 1 */
#define EMMC_BASE          (BCM2708_PERI_BASE + 0x300000) /* eMMC interface */
#define SMI_BASE           (BCM2708_PERI_BASE + 0x600000) /* SMI */
#define USB_BASE           (BCM2708_PERI_BASE + 0x980000) /* DTC_OTG USB controller */
#define MCORE_BASE         (BCM2708_PERI_BASE + 0x0000)   /* Fake frame buffer device (actually the multicore sync block*/

#define ARMCTRL_BASE             (ARM_BASE + 0x000)
#define ARMCTRL_IC_BASE          (ARM_BASE + 0x200)           /* ARM interrupt controller */
#define ARMCTRL_TIMER0_1_BASE    (ARM_BASE + 0x400)           /* Timer 0 and 1 */
#define ARMCTRL_0_SBM_BASE       (ARM_BASE + 0x800)           /* User 0 (ARM)'s Semaphores Doorbells and Mailboxes */

#define ARM_IRQ1_BASE                  0
#define INTERRUPT_TIMER0               (ARM_IRQ1_BASE + 0)
#define INTERRUPT_TIMER1               (ARM_IRQ1_BASE + 1)
#define INTERRUPT_TIMER2               (ARM_IRQ1_BASE + 2)
#define INTERRUPT_TIMER3               (ARM_IRQ1_BASE + 3)
#define INTERRUPT_CODEC0               (ARM_IRQ1_BASE + 4)
#define INTERRUPT_CODEC1               (ARM_IRQ1_BASE + 5)
#define INTERRUPT_CODEC2               (ARM_IRQ1_BASE + 6)
#define INTERRUPT_VC_JPEG              (ARM_IRQ1_BASE + 7)
#define INTERRUPT_ISP                  (ARM_IRQ1_BASE + 8)
#define INTERRUPT_VC_USB               (ARM_IRQ1_BASE + 9)
#define INTERRUPT_VC_3D                (ARM_IRQ1_BASE + 10)
#define INTERRUPT_TRANSPOSER           (ARM_IRQ1_BASE + 11)
#define INTERRUPT_MULTICORESYNC0       (ARM_IRQ1_BASE + 12)
#define INTERRUPT_MULTICORESYNC1       (ARM_IRQ1_BASE + 13)
#define INTERRUPT_MULTICORESYNC2       (ARM_IRQ1_BASE + 14)
#define INTERRUPT_MULTICORESYNC3       (ARM_IRQ1_BASE + 15)
#define INTERRUPT_DMA0                 (ARM_IRQ1_BASE + 16)
#define INTERRUPT_DMA1                 (ARM_IRQ1_BASE + 17)
#define INTERRUPT_VC_DMA2              (ARM_IRQ1_BASE + 18)
#define INTERRUPT_VC_DMA3              (ARM_IRQ1_BASE + 19)
#define INTERRUPT_DMA4                 (ARM_IRQ1_BASE + 20)
#define INTERRUPT_DMA5                 (ARM_IRQ1_BASE + 21)
#define INTERRUPT_DMA6                 (ARM_IRQ1_BASE + 22)
#define INTERRUPT_DMA7                 (ARM_IRQ1_BASE + 23)
#define INTERRUPT_DMA8                 (ARM_IRQ1_BASE + 24)
#define INTERRUPT_DMA9                 (ARM_IRQ1_BASE + 25)
#define INTERRUPT_DMA10                (ARM_IRQ1_BASE + 26)
#define INTERRUPT_DMA11                (ARM_IRQ1_BASE + 27)
#define INTERRUPT_DMA12                (ARM_IRQ1_BASE + 28)
#define INTERRUPT_AUX                  (ARM_IRQ1_BASE + 29)
#define INTERRUPT_ARM                  (ARM_IRQ1_BASE + 30)
#define INTERRUPT_VPUDMA               (ARM_IRQ1_BASE + 31)

#define ARM_IRQ2_BASE                  32
#define INTERRUPT_HOSTPORT             (ARM_IRQ2_BASE + 0)
#define INTERRUPT_VIDEOSCALER          (ARM_IRQ2_BASE + 1)
#define INTERRUPT_CCP2TX               (ARM_IRQ2_BASE + 2)
#define INTERRUPT_SDC                  (ARM_IRQ2_BASE + 3)
#define INTERRUPT_DSI0                 (ARM_IRQ2_BASE + 4)
#define INTERRUPT_AVE                  (ARM_IRQ2_BASE + 5)
#define INTERRUPT_CAM0                 (ARM_IRQ2_BASE + 6)
#define INTERRUPT_CAM1                 (ARM_IRQ2_BASE + 7)
#define INTERRUPT_HDMI0                (ARM_IRQ2_BASE + 8)
#define INTERRUPT_HDMI1                (ARM_IRQ2_BASE + 9)
#define INTERRUPT_PIXELVALVE1          (ARM_IRQ2_BASE + 10)
#define INTERRUPT_I2CSPISLV            (ARM_IRQ2_BASE + 11)
#define INTERRUPT_DSI1                 (ARM_IRQ2_BASE + 12)
#define INTERRUPT_PWA0                 (ARM_IRQ2_BASE + 13)
#define INTERRUPT_PWA1                 (ARM_IRQ2_BASE + 14)
#define INTERRUPT_CPR                  (ARM_IRQ2_BASE + 15)
#define INTERRUPT_SMI                  (ARM_IRQ2_BASE + 16)
#define INTERRUPT_GPIO0                (ARM_IRQ2_BASE + 17)
#define INTERRUPT_GPIO1                (ARM_IRQ2_BASE + 18)
#define INTERRUPT_GPIO2                (ARM_IRQ2_BASE + 19)
#define INTERRUPT_GPIO3                (ARM_IRQ2_BASE + 20)
#define INTERRUPT_VC_I2C               (ARM_IRQ2_BASE + 21)
#define INTERRUPT_VC_SPI               (ARM_IRQ2_BASE + 22)
#define INTERRUPT_VC_I2SPCM            (ARM_IRQ2_BASE + 23)
#define INTERRUPT_VC_SDIO              (ARM_IRQ2_BASE + 24)
#define INTERRUPT_VC_UART              (ARM_IRQ2_BASE + 25)
#define INTERRUPT_SLIMBUS              (ARM_IRQ2_BASE + 26)
#define INTERRUPT_VEC                  (ARM_IRQ2_BASE + 27)
#define INTERRUPT_CPG                  (ARM_IRQ2_BASE + 28)
#define INTERRUPT_RNG                  (ARM_IRQ2_BASE + 29)
#define INTERRUPT_VC_ARASANSDIO        (ARM_IRQ2_BASE + 30)
#define INTERRUPT_AVSPMON              (ARM_IRQ2_BASE + 31)

#define ARM_IRQ0_BASE                  64
#define INTERRUPT_ARM_TIMER            (ARM_IRQ0_BASE + 0)
#define INTERRUPT_ARM_MAILBOX          (ARM_IRQ0_BASE + 1)
#define INTERRUPT_ARM_DOORBELL_0       (ARM_IRQ0_BASE + 2)
#define INTERRUPT_ARM_DOORBELL_1       (ARM_IRQ0_BASE + 3)
#define INTERRUPT_VPU0_HALTED          (ARM_IRQ0_BASE + 4)
#define INTERRUPT_VPU1_HALTED          (ARM_IRQ0_BASE + 5)
#define INTERRUPT_ILLEGAL_TYPE0        (ARM_IRQ0_BASE + 6)
#define INTERRUPT_ILLEGAL_TYPE1        (ARM_IRQ0_BASE + 7)
#define INTERRUPT_PENDING1             (ARM_IRQ0_BASE + 8)
#define INTERRUPT_PENDING2             (ARM_IRQ0_BASE + 9)
#define INTERRUPT_JPEG                 (ARM_IRQ0_BASE + 10)
#define INTERRUPT_USB                  (ARM_IRQ0_BASE + 11)
#define INTERRUPT_3D                   (ARM_IRQ0_BASE + 12)
#define INTERRUPT_DMA2                 (ARM_IRQ0_BASE + 13)
#define INTERRUPT_DMA3                 (ARM_IRQ0_BASE + 14)
#define INTERRUPT_I2C                  (ARM_IRQ0_BASE + 15)
#define INTERRUPT_SPI                  (ARM_IRQ0_BASE + 16)
#define INTERRUPT_I2SPCM               (ARM_IRQ0_BASE + 17)
#define INTERRUPT_SDIO                 (ARM_IRQ0_BASE + 18)
#define INTERRUPT_UART                 (ARM_IRQ0_BASE + 19)
#define INTERRUPT_ARASANSDIO           (ARM_IRQ0_BASE + 20)

// TODO: 21?
#define MAXIRQNUM                      (32 + 32 + 20)
#define MAXFIQNUM                      (32 + 32 + 20)

#define MAX_TIMER                       2
#define MAX_PERIOD                      699050
#define TICKS_PER_uSEC                  1

/*
 *  These are useconds NOT ticks.
 *
 */
#define mSEC_1                          1000
#define mSEC_5                          (mSEC_1 * 5)
#define mSEC_10                         (mSEC_1 * 10)
#define mSEC_25                         (mSEC_1 * 25)
#define SEC_1                           (mSEC_1 * 1000)

/*
 * Watchdog
 */
#define PM_RSTC                        (PM_BASE+0x1c)
#define PM_WDOG                        (PM_BASE+0x24)

#define PM_WDOG_RESET                  0000000000
#define PM_PASSWORD                    0x5a000000
#define PM_WDOG_TIME_SET               0x000fffff
#define PM_RSTC_WRCFG_CLR              0xffffffcf
#define PM_RSTC_WRCFG_SET              0x00000030
#define PM_RSTC_WRCFG_FULL_RESET       0x00000020
#define PM_RSTC_RESET                  0x00000102

/* Code copied from Linux arch/arm/mach-bcm2708/include/mach/arm_control.h. */

/*  Mailbox flags. Valid for all owners */

/* Mailbox status register (...0x98) */
#define ARM_MS_FULL       0x80000000
#define ARM_MS_EMPTY      0x40000000
#define ARM_MS_LEVEL      0x400000FF /* Max. value depdnds on mailbox depth parameter */

/* MAILBOX config/status register (...0x9C) */
/* ANY write to this register clears the error bits! */
#define ARM_MC_IHAVEDATAIRQEN    0x00000001 /* mailbox irq enable:  has data */
#define ARM_MC_IHAVESPACEIRQEN   0x00000002 /* mailbox irq enable:  has space */
#define ARM_MC_OPPISEMPTYIRQEN   0x00000004 /* mailbox irq enable: Opp. is empty */
#define ARM_MC_MAIL_CLEAR        0x00000008 /* mailbox clear write 1, then  0 */
#define ARM_MC_IHAVEDATAIRQPEND  0x00000010 /* mailbox irq pending:  has space */
#define ARM_MC_IHAVESPACEIRQPEND 0x00000020 /* mailbox irq pending: Opp. is empty */
#define ARM_MC_OPPISEMPTYIRQPEND 0x00000040 /* mailbox irq pending */
/* Bit 7 is unused */
#define ARM_MC_ERRNOOWN   0x00000100 /* error : none owner read from mailbox */
#define ARM_MC_ERROVERFLW 0x00000200 /* error : write to full mailbox */
#define ARM_MC_ERRUNDRFLW 0x00000400 /* error : read from empty mailbox */

/* Code copied from Linux arch/arm/mach-bcm2708/include/mach/vcio.h. */

/* Constants shared with the ARM identifying separate mailbox channels */
#define MBOX_CHAN_POWER   0 /* for use by the power management interface */
#define MBOX_CHAN_FB      1 /* for use by the frame buffer */
#define MBOX_CHAN_VUART   2 /* for use by the virtual UART */
#define MBOX_CHAN_VCHIQ   3 /* for use by the VCHIQ interface */
#define MBOX_CHAN_LEDS    4 /* for use by the leds interface */
#define MBOX_CHAN_BUTTONS 5 /* for use by the buttons interface */
#define MBOX_CHAN_TOUCH   6 /* for use by the touchscreen interface */
#define MBOX_CHAN_COUNT   7

/* Linux code ends here. */
