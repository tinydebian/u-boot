#ifndef _NANOPI_BOARDTYPE_H
#define _NANOPI_BOARDTYPE_H

#if defined(CONFIG_MACH_SUN8I_H3_NANOPI)
#define BOARD_TYPE_MAX                    (7)
#elif defined(CONFIG_MACH_SUN50I_H5_NANOPI)
#define BOARD_TYPE_MAX                    (5)
#endif

#if defined(CONFIG_MACH_SUN8I_H3_NANOPI) || defined(CONFIG_MACH_SUN50I_H5_NANOPI)
#define CPU_TYPE_H2_1    (0x42)
#define CPU_TYPE_H2_2    (0x83)
#define CPU_TYPE_H3_1    (0x00)
#define CPU_TYPE_H3_2    (0x81)
#define CPU_TYPE_H3D     (0x58)
#define CPU_TYPE_H5      (0x01)            // H5-CPUID=0x01? NOT reliable

#define BOARD_NAME_LENGTH                 (32)
#define BOARD_TYPE_NANOPI_M1              (0)
#define BOARD_TYPE_NANOPI_NEO             (1)
#define BOARD_TYPE_NANOPI_NEO_AIR         (2)
#define BOARD_TYPE_NANOPI_M1_PLUS         (3)
#define BOARD_TYPE_NANOPI_DUO             (4)
#define BOARD_TYPE_NANOPI_NEO_CORE        (5)
#define BOARD_TYPE_NANOPI_K1              (6)

int nanopi_get_board(void);
extern char nanopi_board[][32];
extern int nanopi_dram_clk[];
#endif

#endif
