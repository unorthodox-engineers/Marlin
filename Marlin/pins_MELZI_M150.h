/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Melzi with ATmega1284 (Malyan M150 version) pin assignments
 *   @JediJeremy
 */

#define BOARD_NAME "Malyan M150 ATmega1284"

#if defined(__AVR_ATmega1284P__)
  #define LARGE_FLASH true
#endif

/**
 * Sanguinololu board pin assignments, modified for Malyan M150
 */

#if !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu and 'ATmega1284 / 16Mhz' from the 'Tools -> Processor' menu."
#endif

//
// Limit Switches
//
#define X_STOP_PIN         18
#define Y_STOP_PIN         19
#define Z_STOP_PIN         20

//
// Z Probe (when not Z_MIN_PIN)
//
#if ENABLED(Z_PROBE_SLED)
  #define SLED_PIN         -1
#endif

//
// Steppers
//
#define X_STEP_PIN         15
#define X_DIR_PIN          21

#define Y_STEP_PIN         22
#define Y_DIR_PIN          23

#define Z_STEP_PIN          3
#define Z_DIR_PIN           2

#define E0_STEP_PIN         1
#define E0_DIR_PIN          0

//
// Temperature Sensors
//
#define TEMP_0_PIN          7   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN        6   // Analog Input (pin 34 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN     13 // (extruder)
#define HEATER_BED_PIN   12 // (bed)
#define X_ENABLE_PIN     14
#define Y_ENABLE_PIN     14
#define Z_ENABLE_PIN     26
#define E0_ENABLE_PIN    14

#define FAN_PIN          4 // Works for Panelolu2 too

//
// Misc. Functions
//
/**
 * On some broken versions of the Sanguino libraries the pin definitions are wrong,
 * which then needs SDSS as pin 24 and  LED_PIN needs to be 28. But you should upgrade your Sanguino libraries! See #368.
 */
#define SDSS             31

#define LED_PIN          27 

//
// Standard M150 LCD/Controller, mostly compatible with Meltzi "Mak3rPanel"
//
#if defined(MAKRPANEL)
  // Pins for DOGM SPI LCD Support
  // #define SLAVE_CLOCK     16
  #define DOGLCD_A0             30
  #define DOGLCD_CS             17
  #define LCD_BACKLIGHT_PIN     28 // backlight LED on PA3
  // GLCD features
  #define LCD_CONTRAST           1
  //The encoder and click button
  #define BTN_EN1               11
  #define BTN_EN2               10
  #define BTN_ENC               16
  // beeper
  #define BEEPER_PIN            29  
  // no SD card detect pin
  #define SD_DETECT_PIN         -1
  // Uncomment screen orientation
  #define LCD_SCREEN_ROT_0
  //#define LCD_SCREEN_ROT_90
  //#define LCD_SCREEN_ROT_180
  //#define LCD_SCREEN_ROT_270
#endif // MAKRPANEL
