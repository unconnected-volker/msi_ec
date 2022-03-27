/*
 * msi_ec.h: Address definitions for MSI embedded controller
 *
 */

#ifndef _MSI_EC_H_
#define _MSI_EC_H_

#define REALTIME_CPU_TEMP           0x68

#define CPU_TEMP_0                  0x6A
#define CPU_TEMP_1                  0x6B
#define CPU_TEMP_2                  0x6C
#define CPU_TEMP_3                  0x6D
#define CPU_TEMP_4                  0x6E
#define CPU_TEMP_5                  0x6F

#define REALTIME_CPU_FAN_SPEED      0x71

#define CPU_FAN_SPEED_0             0x72
#define CPU_FAN_SPEED_1             0x73
#define CPU_FAN_SPEED_2             0x74
#define CPU_FAN_SPEED_3             0x75
#define CPU_FAN_SPEED_4             0x76
#define CPU_FAN_SPEED_5             0x77

#define REALTIME_GPU_TEMP           0x80

#define GPU_TEMP_0                  0x82
#define GPU_TEMP_1                  0x83
#define GPU_TEMP_2                  0x84
#define GPU_TEMP_3                  0x85
#define GPU_TEMP_4                  0x86
#define GPU_TEMP_5                  0x87

#define REALTIME_GPU_FAN_SPEED      0x89

#define GPU_FAN_SPEED_0             0x8A
#define GPU_FAN_SPEED_1             0x8B
#define GPU_FAN_SPEED_2             0x8C
#define GPU_FAN_SPEED_3             0x8D
#define GPU_FAN_SPEED_4             0x8F
#define GPU_FAN_SPEED_5             0x90

#define COOLER_BOOST                0x98

#define COOLER_BOOST_OFF            0x0
#define COOLER_BOOST_ON             0x80

// RPM = 478000/0x0000

#define REALTIME_CPU_FAN_RPM        0xCC
#define REALTIME_CPU_FAN_RPM2       0xCD

#define REALTIME_GPU_FAN_RPM        0xCA
#define REALTIME_GPU_FAN_RPM2       0xCB

// 0x80 + X where X is %
// start charging @ X-10, stop @ X

#define BATTERY_CHARGING_THRESHOLD  0xEF

#define USB_BACKLIGHT               0xF7
#define USB_BACKLIGHT_OFF           0x80
#define USB_BACKLIGHT_HALF          0xC1
#define USB_BACKLIGHT_FULL          0x81

#define FAN_MODE                    0xF4

#define FAN_MODE_AUTO               0x0C
#define FAN_MODE_BASIC              0x4C
#define FAN_MODE_ADVANCED           0x8C



