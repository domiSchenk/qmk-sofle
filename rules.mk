# MCU name
MCU = RP2040
# Bootloader selection
BOOTLOADER = rp2040

SWAP_HANDS_ENABLE = no
ENCODER_ENABLE = yes


# Build Options
#   change yes to no to disable
#
# BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
# MOUSEKEY_ENABLE = yes       # Mouse keys
# EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
# COMMAND_ENABLE = no         # Commands for debug and configuration
# NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
QMK_SETTINGS    = no
COMBO_ENABLE    = no
KEY_OVERRIDE_ENABLE = no

# SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = ws2812
WS2812_DRIVER = vendor


# OLED_ENABLE     = no
OLED_DRIVER     = ssd1306
WPM_ENABLE      = no

# LTO_ENABLE          = yes
