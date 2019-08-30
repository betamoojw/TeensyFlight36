// MIT License

// Copyright (c) 2019 Jacob Dahl

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

namespace address
{

// Configuration
static constexpr uint8_t SMPLRT_DIV = 25;
static constexpr uint8_t CONFIG = 26;

// Sensors
static constexpr uint8_t GYRO_CONFIG = 27;
static constexpr uint8_t ACCEL_CONFIG = 28;
static constexpr uint8_t ACCEL_CONFIG_2 = 29;

// Interrupts
static constexpr uint8_t INT_PIN_BYPASS_ENABLE_CONFIG = 55; // NOTE: unused -- defaults to "Interrupt status is cleared only by reading INT_STATUS register"
static constexpr uint8_t INT_ENABLE = 56;

// Measure
static constexpr uint8_t INT_STATUS = 58;
static constexpr uint8_t ACCEL_XOUT_H = 59;
static constexpr uint8_t ACCEL_XOUT_L = 60;
static constexpr uint8_t ACCEL_YOUT_H = 61;
static constexpr uint8_t ACCEL_YOUT_L = 62;
static constexpr uint8_t ACCEL_ZOUT_H = 63;
static constexpr uint8_t ACCEL_ZOUT_L = 64;
static constexpr uint8_t TEMP_OUT_H = 65;
static constexpr uint8_t TEMP_OUT_L = 66;

// User control
static constexpr uint8_t USER_CTRL = 106;

// Power management
static constexpr uint8_t PWR_MGMT_1 = 107;
static constexpr uint8_t PWR_MGMT_2 = 108;

// Testing
static constexpr uint8_t WHOAMI = 117; // 0111 0101

} // end namespace address

namespace value
{

// Testing
static constexpr uint8_t WHOAMI = 0x71;
// Power management
static constexpr uint8_t CLK_SEL_AUTO = 0x01; // Auto selects the best available clock source -- PLL if ready, else use the Internal oscillator.
static constexpr uint8_t ENABLE_ACCEL_GYRO = 0x00; // Enables XYZ in both accel and gyro -- No sleep modes obviously.
// User control
static constexpr uint8_t BIT_I2C_IF_DIS = 0x10; // Disable I2C Slave module and put the serial interface in SPI mode only.
static constexpr uint8_t BIT_SIG_COND_RST = 0x01; // Reset all gyro digital signal path, accel digital signal path, and temp digital signal path. This bit also clears all the sensor registers.
// Interrupt control
static constexpr uint8_t INT_DISABLE = 0x00; // Disable I2C Slave module and put the serial interface in SPI mode only.
// Sample rate divider
static constexpr uint8_t SMPLRT_DIV_NONE  = 0x00; // NOTE: This register is only effective when DLPF is being used.
// Config
static constexpr uint8_t CONFIG_DLPF_GYRO_92Hz = 0b000000010; // DLPF enabled: 1kHz sample rate    Bandwidth: 92Hz    Delay: 3.9ms
// Gyro
static constexpr uint8_t GYRO_NO_DLPF_2000_DPS_3600HzBW = 0b00011010;
static constexpr uint8_t GYRO_DLPF_2000_DPS = 0b00011000;
// Accel
static constexpr uint8_t ACCEL_16_G = 0b00011000; // +/- 16g
static constexpr uint8_t ACCEL_NO_DLPF_4kHz = 0b00001000; // DLPF disabled: 4kHz sample rate    Bandwidth: 1046Hz    Delay: 0.503ms
static constexpr uint8_t ACCEL_DLPF_1kHz = 0b00000011; // DLPF enabled: 1kHz sample rate    Bandwidth: 44.8Hz    Delay: 4.88ms
// Measure
static constexpr uint8_t RAW_DATA_RDY_INT = 0b00000001;

} // end namespace value