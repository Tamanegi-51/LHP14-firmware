#pragma once

// ジョイスティックの軸数を定義
#define JOYSTICK_AXES 2   // X軸とY軸

// ADCピンの定義（例: ProMicroのF4/F5ピン）
#define JOYSTICK_AXIS_X_PIN F4
#define JOYSTICK_AXIS_Y_PIN F5


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

