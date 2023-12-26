#ifndef _EPD_COMMANDS_H_
#define _EPD_COMMANDS_H_

#define EPD_CMD_PSR 0x00  // Panel Setting
#define EPD_CMD_PWR 0x01  // Power Setting
#define EPD_CMD_POF 0x02  // Power OFF
#define EPD_CMD_PFS 0x03  // Power OFF Sequence Setting
#define EPD_CMD_PON 0x04  // Power ON
#define EPD_CMD_PMES 0x05 // Power ON Measure_CMD
#define EPD_CMD_BTST 0x06 // Booster Soft Start
#define EPD_CMD_DSLP 0x07 // Deep Sleep
#define EPD_CMD_DTM1 0x10 // Data Start transmission 1, White/Black Data (x-byte command)
#define EPD_CMD_DSP 0x11  // Data Stop
#define EPD_CMD_DRF 0x12  // Display Refresh
#define EPD_CMD_DTM2 0x13 // Data Start transmission 2, Red Data (x-byte command)

#define EPD_CMD_PLL 0x30 // PLL control

#define EPD_CMD_TSC 0x40 // Temperature Sensor Calibration h
#define EPD_CMD_TSE 0x41 // Temperature Sensor Selection
#define EPD_CMD_TSW 0x42 // Temperature Sensor Write
#define EPD_CMD_TSR 0x43 // Temperature Sensor Read

#define EPD_CMD_CDI 0x50 // VCOM and Data interval setting
#define EPD_CMD_LPD 0x51 // Lower Power Detection

#define EPD_CMD_TCON 0x60 // TCON Setting
#define EPD_CMD_TRES 0x61 // Resolution Setting
#define EPD_CMD_GSST 0x65 // Gate Source Start Setting

#define EPD_CMD_REV 0x70 // Revision
#define EPD_CMD_FLG 0x71 // Get Status

#define EPD_CMD_VCOM 0x80 // Auto Measurement VCOM
#define EPD_CMD_VV   0x81 // Read VCOM Value
#define EPD_CMD_VDCS 0x82 // VCOM_DC Setting

#define EPD_CMD_PTL   0x90 // Partial Window
#define EPD_CMD_PTIN  0x91 // Partial In
#define EPD_CMD_PTOUT 0x92 // Partial Out

#define EPD_CMD_PGM  0xA0 // Program Mode
#define EPD_CMD_APG  0xA1 // Active Programming
#define EPD_CMD_ROTP 0xA2 // Read OTP

#define EPD_CMD_CCSET 0xE0 // Cascade Setting
#define EPD_CMD_PWS   0xE3 // Power Saving
#define EPD_CMD_TSSET 0xE5 // Force Temperature
#define EPD_CMD_LPSEL 0xE4 // LPD Selection

#endif // _EPD_COMMANDS_H_