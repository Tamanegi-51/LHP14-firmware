#pragma once

#include "config_common.h"

// USBデバイス情報（info.json と一致）
#define VENDOR_ID       0xFF14
#define PRODUCT_ID      0x000C
#define DEVICE_VER      0x0001
#define MANUFACTURER    Trinity Ironworks
#define PRODUCT         LHP14Lite

// 行列サイズ（info.json と一致）
#define MATRIX_ROWS 4
#define MATRIX_COLS 7

// ダイオード方向（info.json と一致）
#define DIODE_DIRECTION COL2ROW

// デバウンス（チャタリング防止）
#define DEBOUNCE 5

// RGB LED（info.json と一致）
#define RGB_DI_PIN D3
#define RGBLED_NUM 20

// --- ジョイスティック設定 ---
#define JOY_X_PIN F0
#define JOY_Y_PIN F1
#define JOY_SW_PIN F4
#define JOY_CENTER 512
#define JOY_DEADZONE 50
