// --- LHP14 Lite config.h ---

#pragma once

// --- USB識別情報（Remap対応に必須） ---
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Lime
#define PRODUCT         LHP14Lite_d
#define DESCRIPTION     "Remap-compatible firmware with joystick"

// --- マウス更新周期 ---
#define POINTING_DEVICE_TASK_THROTTLE_MS 10

// --- ジョイスティックのピン割り当て ---
#define JOY_X_PIN F6  // A1
#define JOY_Y_PIN F7  // A0
#define JOY_SW_PIN D2 // スイッチ（プルアップ前提）

// --- アナログ中心値とデッドゾーン ---
#define JOY_CENTER 512
#define JOY_DEADZONE 80
#define JOY_MAX 1023

// --- Remap 用のキーボード設定 ---
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

// 必要ならダイオード方向
#define DIODE_DIRECTION COL2ROW
