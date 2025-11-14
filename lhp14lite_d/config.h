#pragma once

#include "config_user.h"

/* USB設定 */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    YourName
#define PRODUCT         LHP14_Lite

/* マトリクス */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define DIODE_DIRECTION COL2ROW

/* タッピング設定 */
#define TAPPING_TERM 200

/* ポインティングデバイス（トラックボール等） */
#ifndef POINTING_DEVICE_ENABLE
#define POINTING_DEVICE_ENABLE yes
#endif
#define POINTING_DEVICE_RESOLUTION 400

