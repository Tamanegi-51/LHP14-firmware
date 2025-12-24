# --- LHP14 Lite rules.mk ---

# キーボードの基本設定
MCU = atmega32u4

# Remap / VIA 対応
VIA_ENABLE = yes

# 最適化（Pro Micro では安定性が上がる）
LTO_ENABLE = yes

# ジョイスティック（アナログ入力）
POINTING_DEVICE_ENABLE = yes
ANALOG_ENABLE = yes

# マウスレポートを使う
MOUSEKEY_ENABLE = yes

# コンパイル高速化（任意）
EXTRAKEY_ENABLE = yes
