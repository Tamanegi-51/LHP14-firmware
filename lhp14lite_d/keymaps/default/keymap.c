// --- LHP14 Lite keymap.c（ジョイスティック追加部分） ---

#include "analog.h"
#include "pointing_device.h"

static int16_t joy_x = 0;
static int16_t joy_y = 0;
static bool    joy_sw = false;

// ジョイスティック読み取り
static void read_joystick(void) {
    uint16_t raw_x = analogReadPin(JOY_X_PIN);
    uint16_t raw_y = analogReadPin(JOY_Y_PIN);
    bool     sw    = (readPin(JOY_SW_PIN) == 0); // プルアップ前提

    int16_t dx = (int16_t)raw_x - JOY_CENTER;
    int16_t dy = (int16_t)raw_y - JOY_CENTER;

    if (dx > -JOY_DEADZONE && dx < JOY_DEADZONE) dx = 0;
    if (dy > -JOY_DEADZONE && dy < JOY_DEADZONE) dy = 0;

    dx /= 32;
    dy /= 32;

    joy_x = dx;
    joy_y = -dy; // Y軸反転
    joy_sw = sw;
}

// マウスレポート生成
report_mouse_t pointing_device_task(report_mouse_t mouse_report) {
    read_joystick();

    mouse_report.x = joy_x;
    mouse_report.y = joy_y;

    // 押し込みを左クリックにする例
    if (joy_sw) {
        mouse_report.buttons |= MOUSE_BTN1;
    } else {
        mouse_report.buttons &= ~MOUSE_BTN1;
    }

    return mouse_report;
}



