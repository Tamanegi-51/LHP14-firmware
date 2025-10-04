// Copyright 2023 Neo Trinity
// SPDX-License-Identifier: GPL-2.0-or-later

#include "lhp14lite_d.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_180;
}
#include "lhp14lite.h"
#include "analog.h"

report_mouse_t pointing_device_driver_get_report(void) {
  report_mouse_t mouse_report = {};
  int x = analogReadPin(A0);
  int y = analogReadPin(A1);
  int center = 512;
  int threshold = 50;

  if (abs(x - center) > threshold) {
    mouse_report.x = (x - center) / 20;
  }
  if (abs(y - center) > threshold) {
    mouse_report.y = (y - center) / 20;
  }

  return mouse_report;
}
