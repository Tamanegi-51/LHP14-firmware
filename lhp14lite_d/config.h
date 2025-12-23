// --- LHP14 Lite config.h ---

#pragma once

// マウス更新周期
#define POINTING_DEVICE_TASK_THROTTLE_MS 10

// 仮ピン割り当て（あとで差し替え可能）
#define JOY_X_PIN F6  // A1
#define JOY_Y_PIN F7  // A0
#define JOY_SW_PIN D2 // スイッチ

// アナログ中心値とデッドゾーン
#define JOY_CENTER 512
#define JOY_DEADZONE 80
#define JOY_MAX 1023

