#pragma once

// #include "config_common.h"

/* Enable serial split transport */
// #define USE_SERIAL

// #define EE_HANDS

#define ENCODER_RESOLUTION 4
// #undef USB_VBUS_PIN
//#define EE_HANDS
// #define SPLIT_USB_DETECT
// #define SPLIT_WATCHDOG_ENABLE
#define SPLIT_HAND_PIN GP4
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
#define USB_VBUS_PIN 19
#define USE_SERIAL
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN   GP1


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#ifdef OLED_ENABLE
// settings for the oled keyboard demo with Adafruit 0.91" OLED display on the Stemma QT port
    #define OLED_DISPLAY_128X32
    #define I2C_DRIVER I2CD1
    #define I2C1_SDA_PIN GP2
    #define I2C1_SCL_PIN GP3
    #define OLED_BRIGHTNESS 180
    #define OLED_TIMEOUT 60000
    #define OLED_FONT_H "lib/glcdfont.c"
    // #define WPM_ESTIMATED_WORD_SIZE 5
    #define SPLIT_LAYER_STATE_ENABLE
    #define SPLIT_LED_STATE_ENABLE
    #define SPLIT_MODS_ENABLE
    #define SPLIT_WPM_ENABLE
    #define SPLIT_OLED_ENABLE
#endif
