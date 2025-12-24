#include QMK_KEYBOARD_H
#include "analog.h"
#include "pointing_device.h"

// --- ジョイスティック状態 ---
static int16_t joy_x = 0;
static int16_t joy_y = 0;
static bool    joy_sw = false;

// --- キーマップ（QMKが持っている正式な LAYOUT_ortho_5x4 を使用） ---
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x4(
        KC_Q, KC_W, KC_E, KC_R,
        KC_A, KC_S, KC_D, KC_F,
        KC_Z, KC_X, KC_C, KC_V,
        KC_1, KC_2, KC_3, KC_4,
        KC_SPC, KC_LALT, KC_LGUI, KC_LCTL
    )
};

// --- ジョイスティック読み取り ---
static void read_joystick(void) {
    uint16_t raw_x = analogReadPin(JOY_X_PIN);
    uint16_t raw_y = analogReadPin(JOY_Y_PIN);
    bool     sw    = (readPin(JOY_SW_PIN) == 0);

    int16_t dx = (int16_t)raw_x - JOY_CENTER;
    int16_t dy = (int16_t)raw_y - JOY_CENTER;

    if (dx > -JOY_DEADZONE && dx < JOY_DEADZONE) dx = 0;
    if (dy > -JOY_DEADZONE && dy < JOY_DEADZONE) dy = 0;

    dx /= 32;
    dy /= 32;

    joy_x = dx;
    joy_y = -dy;
    joy_sw = sw;
}

// --- マウスレポート生成 ---
report_mouse_t pointing_device_task(report_mouse_t mouse_report) {
    read_joystick();

    mouse_report.x = joy_x;
    mouse_report.y = joy_y;

    if (joy_sw) {
        mouse_report.buttons |= MOUSE_BTN1;
    } else {
        mouse_report.buttons &= ~MOUSE_BTN1;
    }

    return mouse_report;
}
