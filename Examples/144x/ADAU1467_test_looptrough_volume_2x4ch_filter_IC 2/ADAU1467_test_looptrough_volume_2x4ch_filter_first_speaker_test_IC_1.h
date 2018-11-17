/*
 * File:           C:\Development\SigmaDSP\Examples\144x\ADAU1467_test_looptrough_volume_2x4ch_filter_IC 2\ADAU1467_test_looptrough_volume_2x4ch_filter_first_speaker_test_IC_1.h
 *
 * Created:        Friday, November 16, 2018 9:26:17 PM
 * Description:    ADAU1467_test_looptrough_volume_2x4ch_filter_first_speaker_test:IC 1 program data.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2018 Analog Devices, Inc. All rights reserved.
 */
#ifndef __ADAU1467_TEST_LOOPTROUGH_VOLUME_2X4CH_FILTER_FIRST_SPEAKER_TEST_IC_1_H__
#define __ADAU1467_TEST_LOOPTROUGH_VOLUME_2X4CH_FILTER_FIRST_SPEAKER_TEST_IC_1_H__

#include "SigmaStudioFW.h"
#include "ADAU1467_test_looptrough_volume_2x4ch_filter_first_speaker_test_IC_1_REG.h"

#define DEVICE_ARCHITECTURE_IC_1                  "ADAU1467"
#define DEVICE_ADDR_IC_1                          0x0

/* DSP Ram Data */
#define DM1_DATA_SIZE_IC_1 512
#define DM1_DATA_ADDR_IC_1 24576
ADI_REG_TYPE DM1_DATA_Data_IC_1[DM1_DATA_SIZE_IC_1] = {
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFE, 0x03, 0x89, 0xCB, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFE, 0x08, 0x67, 0x21, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFE, 0x03, 0x89, 0xCB, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFE, 0x08, 0x67, 0x21, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0x04, 0x3E, 0x70, 
0x00, 0x08, 0x7C, 0xE0, 
0x00, 0x04, 0x3E, 0x70, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0x04, 0x3E, 0x70, 
0x00, 0x08, 0x7C, 0xE0, 
0x00, 0x04, 0x3E, 0x70, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFE, 0x03, 0x89, 0xCB, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFE, 0x08, 0x67, 0x21, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFE, 0x03, 0x89, 0xCB, 
0x00, 0xFE, 0x3B, 0x1B, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFE, 0x08, 0x67, 0x21, 
0x00, 0xFB, 0xCC, 0x6F, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0x04, 0x3E, 0x70, 
0x00, 0x08, 0x7C, 0xE0, 
0x00, 0x04, 0x3E, 0x70, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0x04, 0x3E, 0x70, 
0x00, 0x08, 0x7C, 0xE0, 
0x00, 0x04, 0x3E, 0x70, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
};

/* DSP Program Data */
#define PROGRAM_SIZE_IC_1 1160
#define PROGRAM_ADDR_IC_1 49152
ADI_REG_TYPE Program_Data_IC_1[PROGRAM_SIZE_IC_1] = {
0x00, 0x00, 0x00, 0x02, 
0x0C, 0x00, 0xDC, 0xDC, 
0x0D, 0x00, 0xFF, 0xD2, 
0x0D, 0x00, 0xFF, 0xD0, 
0x0D, 0x00, 0xF4, 0x50, 
0x0D, 0x00, 0xF4, 0x00, 
0xC0, 0x00, 0x23, 0x80, 
0x80, 0x00, 0x00, 0x00, 
0xC0, 0x00, 0x23, 0x00, 
0x80, 0x00, 0x00, 0x00, 
0xC0, 0x00, 0x23, 0xC0, 
0x80, 0x00, 0x00, 0x10, 
0xC0, 0x00, 0x22, 0x00, 
0x80, 0x00, 0x00, 0x00, 
0x08, 0x80, 0xDC, 0xE0, 
0x0C, 0x00, 0xDC, 0xDC, 
0x0A, 0x21, 0x00, 0x12, 
0x08, 0x00, 0x00, 0x10, 
0x01, 0x00, 0x00, 0x14, 
0x06, 0x40, 0x40, 0x10, 
0x0A, 0x21, 0x00, 0x16, 
0x08, 0x00, 0x00, 0x14, 
0x01, 0x00, 0x00, 0x18, 
0x06, 0x40, 0x50, 0x10, 
0xC0, 0x00, 0x20, 0x00, 
0x80, 0x00, 0x00, 0x2B, 
0x0D, 0x00, 0xFF, 0xC1, 
0xC0, 0x00, 0x20, 0x00, 
0x80, 0x00, 0x00, 0x01, 
0x0D, 0x00, 0xF4, 0x62, 
0xC0, 0x00, 0x20, 0x00, 
0x80, 0x00, 0x00, 0x00, 
0x0D, 0x00, 0xF4, 0x62, 
0xC0, 0x00, 0x20, 0x00, 
0x80, 0x00, 0x00, 0x02, 
0x0D, 0x00, 0xFF, 0xD1, 
0x00, 0x00, 0x00, 0x03, 
0x0D, 0x00, 0xFF, 0xD2, 
0x00, 0x00, 0x00, 0x05, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x02, 0x01, 0x00, 0x26, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x08, 0x9E, 0xDC, 0xE0, 
0x08, 0x9C, 0x00, 0x14, 
0x08, 0x9A, 0x00, 0x10, 
0x00, 0x00, 0x00, 0x00, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x4F, 0x00, 0x00, 
0x08, 0x8A, 0xDC, 0xE0, 
0x0A, 0x23, 0x00, 0x06, 
0x0A, 0x2B, 0x00, 0x07, 
0x00, 0x88, 0x20, 0x00, 
0x0A, 0xA7, 0x00, 0x05, 
0x00, 0x00, 0x00, 0x22, 
0xC0, 0x00, 0x2D, 0x30, 
0x80, 0x00, 0x50, 0x00, 
0x30, 0x00, 0xB4, 0x6A, 
0x00, 0x88, 0x20, 0x00, 
0xC0, 0x00, 0x28, 0x70, 
0x80, 0x00, 0x60, 0x00, 
0x02, 0x09, 0x00, 0x4C, 
0x00, 0x8C, 0x11, 0x91, 
0x00, 0x00, 0x00, 0x23, 
0x00, 0x8C, 0x2A, 0x02, 
0x30, 0x00, 0xBC, 0xE9, 
0x00, 0x84, 0x0D, 0x9C, 
0x00, 0x20, 0x0B, 0x2D, 
0x00, 0x00, 0xC2, 0xF1, 
0x01, 0x00, 0x00, 0x4A, 
0x06, 0x00, 0x50, 0x14, 
0x36, 0x40, 0x50, 0x15, 
0x26, 0x40, 0x40, 0x15, 
0x09, 0x2B, 0x00, 0x06, 
0x09, 0x2B, 0x00, 0x07, 
0x00, 0x00, 0x00, 0x00, 
0x0C, 0x00, 0xFC, 0x60, 
0x06, 0x40, 0x10, 0x0E, 
0x0C, 0x00, 0xFC, 0x61, 
0x06, 0x40, 0x10, 0x1E, 
0xC0, 0x00, 0x08, 0x0F, 
0x8D, 0x80, 0x00, 0x1A, 
0xC0, 0x00, 0x08, 0x0F, 
0x8D, 0x84, 0x00, 0x19, 
0xC0, 0x00, 0x08, 0x0F, 
0x8D, 0x94, 0x00, 0x18, 
0x06, 0x10, 0x10, 0x0E, 
0x06, 0x10, 0x90, 0x1E, 
0x0C, 0x01, 0xFD, 0xA0, 
0x00, 0x10, 0x00, 0x08, 
0x0D, 0x00, 0x00, 0x18, 
0x05, 0x4C, 0x10, 0x2E, 
0x05, 0x6C, 0x10, 0x3E, 
0xC0, 0x00, 0x08, 0x0F, 
0x8D, 0x80, 0x00, 0x1B, 
0xC0, 0x00, 0x08, 0x8F, 
0x8D, 0x84, 0x00, 0x74, 
0xC0, 0x00, 0x08, 0x8F, 
0x8D, 0x94, 0x00, 0x76, 
0x06, 0x10, 0x10, 0x2E, 
0x06, 0x10, 0x90, 0x3E, 
0xC0, 0x00, 0x08, 0x90, 
0x80, 0x76, 0xFD, 0xA0, 
0x0C, 0x10, 0x00, 0x76, 
0x00, 0x10, 0x00, 0x08, 
0x00, 0x10, 0x82, 0x49, 
0x05, 0x4C, 0x10, 0x9E, 
0x05, 0x6C, 0x10, 0x6E, 
0x05, 0x4C, 0x91, 0xCE, 
0x05, 0x6C, 0x91, 0xDE, 
0x05, 0x0F, 0x90, 0x6E, 
0x05, 0x4F, 0x80, 0x2D, 
0x05, 0x0F, 0x10, 0x6E, 
0x05, 0x4F, 0x12, 0x0E, 
0x0C, 0x4E, 0x00, 0x78, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0E, 0x00, 0x21, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x1C, 
0x06, 0x08, 0x10, 0x4E, 
0x06, 0x18, 0x40, 0x31, 
0xF1, 0x6C, 0x80, 0x01, 
0x88, 0x00, 0x00, 0x20, 
0x00, 0x00, 0x21, 0x02, 
0x00, 0x04, 0x41, 0x0F, 
0xFC, 0x6C, 0x80, 0x21, 
0x81, 0x82, 0x04, 0x23, 
0xFD, 0x74, 0xA2, 0x05, 
0x81, 0x80, 0x01, 0x25, 
0xE0, 0xAC, 0x80, 0x25, 
0x8C, 0x02, 0x04, 0x23, 
0xFC, 0x74, 0xA6, 0x41, 
0x83, 0x80, 0x01, 0x25, 
0xE1, 0xAC, 0x80, 0x21, 
0x8E, 0x06, 0x04, 0x23, 
0x06, 0x04, 0x90, 0xDE, 
0xE0, 0x34, 0xA2, 0x05, 
0x81, 0x80, 0x00, 0x20, 
0xE0, 0x80, 0x00, 0x25, 
0x8C, 0x00, 0x00, 0x00, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x90, 0xFE, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0D, 0x00, 0x03, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x08, 
0x06, 0x08, 0x00, 0x0D, 
0x06, 0x18, 0x50, 0x31, 
0xF6, 0x62, 0x80, 0x01, 
0x88, 0x02, 0x44, 0x00, 
0xF6, 0x78, 0x80, 0x21, 
0x81, 0x80, 0x47, 0x02, 
0x03, 0x02, 0x00, 0xA2, 
0xFA, 0x7A, 0xA2, 0x05, 
0x81, 0x82, 0x4A, 0x00, 
0xF6, 0x41, 0x00, 0x25, 
0x8C, 0x00, 0x47, 0x02, 
0xFA, 0x78, 0xA6, 0x41, 
0x83, 0x82, 0x4A, 0x00, 
0xF6, 0x43, 0x00, 0x21, 
0x8E, 0x04, 0x47, 0x02, 
0x06, 0x04, 0x91, 0x3E, 
0xFA, 0x40, 0x22, 0x05, 
0x81, 0x82, 0x4A, 0x00, 
0xE0, 0x01, 0x00, 0x25, 
0x8C, 0x00, 0x01, 0x02, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x91, 0x5E, 
0x0C, 0x4C, 0x00, 0x79, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0E, 0x00, 0x28, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x30, 
0x06, 0x08, 0x11, 0xEE, 
0x06, 0x18, 0x40, 0x31, 
0xF1, 0x6C, 0x80, 0x01, 
0x88, 0x00, 0x01, 0x22, 
0xF0, 0x6C, 0x80, 0x21, 
0x81, 0x82, 0x04, 0x23, 
0x00, 0x04, 0x41, 0x0E, 
0x06, 0x04, 0x91, 0x9E, 
0xE0, 0x34, 0xA2, 0x05, 
0x81, 0x80, 0x00, 0x20, 
0xE0, 0x80, 0x00, 0x25, 
0x8C, 0x00, 0x00, 0x00, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x91, 0xBE, 
0x05, 0x0F, 0x90, 0x9E, 
0x05, 0x4F, 0x81, 0x0D, 
0x05, 0x0F, 0x10, 0x9E, 
0x05, 0x4F, 0x12, 0xDE, 
0x0C, 0x4E, 0x00, 0x7A, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0E, 0x00, 0x2E, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x3A, 
0x06, 0x08, 0x10, 0x7E, 
0x06, 0x18, 0x40, 0x31, 
0xF1, 0x6C, 0x80, 0x01, 
0x88, 0x00, 0x00, 0x20, 
0x00, 0x00, 0x21, 0x02, 
0x00, 0x04, 0x41, 0x0F, 
0xFC, 0x6C, 0x80, 0x21, 
0x81, 0x82, 0x04, 0x23, 
0xFD, 0x74, 0xA2, 0x05, 
0x81, 0x80, 0x01, 0x25, 
0xE0, 0xAC, 0x80, 0x25, 
0x8C, 0x02, 0x04, 0x23, 
0xFC, 0x74, 0xA6, 0x41, 
0x83, 0x80, 0x01, 0x25, 
0xE1, 0xAC, 0x80, 0x21, 
0x8E, 0x06, 0x04, 0x23, 
0x06, 0x04, 0x90, 0xAE, 
0xE0, 0x34, 0xA2, 0x05, 
0x81, 0x80, 0x00, 0x20, 
0xE0, 0x80, 0x00, 0x25, 
0x8C, 0x00, 0x00, 0x00, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x90, 0xCE, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0D, 0x00, 0x11, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x26, 
0x06, 0x08, 0x00, 0xED, 
0x06, 0x18, 0x50, 0x31, 
0xF6, 0x62, 0x80, 0x01, 
0x88, 0x02, 0x44, 0x00, 
0xF6, 0x78, 0x80, 0x21, 
0x81, 0x80, 0x47, 0x02, 
0x03, 0x02, 0x00, 0xEF, 
0xFA, 0x7A, 0xA2, 0x05, 
0x81, 0x82, 0x4A, 0x00, 
0xF6, 0x41, 0x00, 0x25, 
0x8C, 0x00, 0x47, 0x02, 
0xFA, 0x78, 0xA6, 0x41, 
0x83, 0x82, 0x4A, 0x00, 
0xF6, 0x43, 0x00, 0x21, 
0x8E, 0x04, 0x47, 0x02, 
0x06, 0x04, 0x91, 0x0E, 
0xFA, 0x40, 0x22, 0x05, 
0x81, 0x82, 0x4A, 0x00, 
0xE0, 0x01, 0x00, 0x25, 
0x8C, 0x00, 0x01, 0x02, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x91, 0x2E, 
0x0C, 0x4C, 0x00, 0x7B, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x0E, 0x00, 0x35, 
0xC0, 0x00, 0x00, 0x00, 
0x82, 0x1F, 0x00, 0x4E, 
0x06, 0x08, 0x12, 0xBE, 
0x06, 0x18, 0x40, 0x31, 
0xF1, 0x6C, 0x80, 0x01, 
0x88, 0x00, 0x01, 0x22, 
0xF0, 0x6C, 0x80, 0x21, 
0x81, 0x82, 0x04, 0x23, 
0x00, 0x04, 0x41, 0x0E, 
0x06, 0x04, 0x91, 0x6E, 
0xE0, 0x34, 0xA2, 0x05, 
0x81, 0x80, 0x00, 0x20, 
0xE0, 0x80, 0x00, 0x25, 
0x8C, 0x00, 0x00, 0x00, 
0x00, 0x84, 0x01, 0x19, 
0x05, 0x4C, 0x91, 0x8E, 
0x06, 0x00, 0x10, 0xCE, 
0x06, 0x00, 0x90, 0xFE, 
0x0D, 0x10, 0xFC, 0xC0, 
0x06, 0x00, 0x11, 0x2E, 
0x06, 0x00, 0x91, 0x5E, 
0x0D, 0x10, 0xFC, 0xC4, 
0x06, 0x00, 0x11, 0x8E, 
0x06, 0x00, 0x91, 0xBE, 
0x0D, 0x10, 0xFC, 0xC8, 
0x06, 0x00, 0x11, 0xCE, 
0x06, 0x00, 0x91, 0xDE, 
0x0D, 0x10, 0xFC, 0xCC, 
0x08, 0x80, 0x00, 0x10, 
0x08, 0x82, 0x00, 0x14, 
0x00, 0x00, 0x20, 0x01, 
0x00, 0x00, 0x21, 0x01, 
0x09, 0x80, 0x00, 0x10, 
0x09, 0x82, 0x00, 0x14, 
0x00, 0x00, 0x00, 0x02, 
0x0C, 0x10, 0xF4, 0x60, 
0x02, 0xC2, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
};

/* DSP Parameter (Coefficient) Data */
#define PARAM_SIZE_IC_1 512
#define PARAM_ADDR_IC_1 0
ADI_REG_TYPE Param_Data_IC_1[PARAM_SIZE_IC_1] = {
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x58, 
0x00, 0x00, 0x00, 0x58, 
0x00, 0x00, 0x00, 0x1C, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x44, 
0x00, 0x00, 0x00, 0x44, 
0x00, 0x00, 0x00, 0x38, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x19, 0x99, 0x9A, 
0x00, 0x00, 0x20, 0x8A, 
0x00, 0x00, 0x20, 0x8A, 
0x00, 0x00, 0x06, 0x9E, 
0x00, 0x00, 0x0D, 0x3C, 
0x00, 0x00, 0x06, 0x9E, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0x00, 0x05, 0x35, 
0x00, 0x00, 0x0A, 0x69, 
0x00, 0x00, 0x05, 0x35, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0x00, 0x05, 0x42, 
0x00, 0x00, 0x0A, 0x83, 
0x00, 0x00, 0x05, 0x42, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0x00, 0x05, 0x35, 
0x00, 0x00, 0x0A, 0x69, 
0x00, 0x00, 0x05, 0x35, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x01, 0x74, 0xB0, 0xDD, 
0xFD, 0x16, 0x9E, 0x47, 
0x01, 0x74, 0xB0, 0xDD, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0xD1, 0x94, 0x59, 
0xFE, 0x5C, 0xD7, 0x4F, 
0x00, 0xD1, 0x94, 0x59, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0x00, 0x06, 0x9E, 
0x00, 0x00, 0x0D, 0x3C, 
0x00, 0x00, 0x06, 0x9E, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0x00, 0x05, 0x35, 
0x00, 0x00, 0x0A, 0x69, 
0x00, 0x00, 0x05, 0x35, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x00, 0x00, 0x05, 0x42, 
0x00, 0x00, 0x0A, 0x83, 
0x00, 0x00, 0x05, 0x42, 
0xFF, 0x03, 0x7F, 0x48, 
0x01, 0xFC, 0x6B, 0xB2, 
0x00, 0x00, 0x05, 0x35, 
0x00, 0x00, 0x0A, 0x69, 
0x00, 0x00, 0x05, 0x35, 
0xFF, 0x08, 0x5C, 0xB8, 
0x01, 0xF7, 0x8E, 0x76, 
0x01, 0x74, 0xB0, 0xDD, 
0xFD, 0x16, 0x9E, 0x47, 
0x01, 0x74, 0xB0, 0xDD, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0xD1, 0x94, 0x59, 
0xFE, 0x5C, 0xD7, 0x4F, 
0x00, 0xD1, 0x94, 0x59, 
0xFF, 0x54, 0x5A, 0x6F, 
0x01, 0x9A, 0xAB, 0xD1, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
};


/* Register Default - IC 1.SOFT_RESET */
ADI_REG_TYPE R0_SOFT_RESET_IC_1_Default[REG_SOFT_RESET_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.SOFT_RESET */
ADI_REG_TYPE R1_SOFT_RESET_IC_1_Default[REG_SOFT_RESET_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.Reset Delay */
#define R2_RESET_DELAY_IC_1_ADDR 0x0
#define R2_RESET_DELAY_IC_1_SIZE 2
ADI_REG_TYPE R2_RESET_DELAY_IC_1_Default[R2_RESET_DELAY_IC_1_SIZE] = {
0x00, 0xFF
};

/* Register Default - IC 1.HIBERNATE */
ADI_REG_TYPE R3_HIBERNATE_IC_1_Default[REG_HIBERNATE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.HIBERNATE */
ADI_REG_TYPE R4_HIBERNATE_IC_1_Default[REG_HIBERNATE_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.Hibernate Delay */
#define R5_HIBERNATE_DELAY_IC_1_ADDR 0x0
#define R5_HIBERNATE_DELAY_IC_1_SIZE 2
ADI_REG_TYPE R5_HIBERNATE_DELAY_IC_1_Default[R5_HIBERNATE_DELAY_IC_1_SIZE] = {
0x00, 0xFF
};

/* Register Default - IC 1.KILL_CORE */
ADI_REG_TYPE R6_KILL_CORE_IC_1_Default[REG_KILL_CORE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.KILL_CORE */
ADI_REG_TYPE R7_KILL_CORE_IC_1_Default[REG_KILL_CORE_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.PLL_ENABLE */
ADI_REG_TYPE R8_PLL_ENABLE_IC_1_Default[REG_PLL_ENABLE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.PLL_CTRL1 Register */
ADI_REG_TYPE R9_PLL_CTRL1_IC_1_Default[REG_PLL_CTRL1_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.PLL_CLK_SRC Register */
ADI_REG_TYPE R10_PLL_CLK_SRC_IC_1_Default[REG_PLL_CLK_SRC_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.MCLK_OUT Register */
ADI_REG_TYPE R11_MCLK_OUT_IC_1_Default[REG_MCLK_OUT_IC_1_BYTE] = {
0x00, 0x05
};

/* Register Default - IC 1.PLL_ENABLE Register */
ADI_REG_TYPE R12_PLL_ENABLE_IC_1_Default[REG_PLL_ENABLE_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.PLL Lock Delay */
#define R13_PLL_LOCK_DELAY_IC_1_ADDR 0x0
#define R13_PLL_LOCK_DELAY_IC_1_SIZE 2
ADI_REG_TYPE R13_PLL_LOCK_DELAY_IC_1_Default[R13_PLL_LOCK_DELAY_IC_1_SIZE] = {
0x00, 0xFF
};

/* Register Default - IC 1.POWER_ENABLE0 Register */
ADI_REG_TYPE R14_POWER_ENABLE0_IC_1_Default[REG_POWER_ENABLE0_IC_1_BYTE] = {
0x1F, 0xFF
};

/* Register Default - IC 1.POWER_ENABLE1 Register */
ADI_REG_TYPE R15_POWER_ENABLE1_IC_1_Default[REG_POWER_ENABLE1_IC_1_BYTE] = {
0x00, 0x1F
};

/* Register Default - IC 1.SOUT_SOURCE0 */
ADI_REG_TYPE R16_SOUT_SOURCE0_IC_1_Default[REG_SOUT_SOURCE0_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE1 */
ADI_REG_TYPE R17_SOUT_SOURCE1_IC_1_Default[REG_SOUT_SOURCE1_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE2 */
ADI_REG_TYPE R18_SOUT_SOURCE2_IC_1_Default[REG_SOUT_SOURCE2_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE3 */
ADI_REG_TYPE R19_SOUT_SOURCE3_IC_1_Default[REG_SOUT_SOURCE3_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE4 */
ADI_REG_TYPE R20_SOUT_SOURCE4_IC_1_Default[REG_SOUT_SOURCE4_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE5 */
ADI_REG_TYPE R21_SOUT_SOURCE5_IC_1_Default[REG_SOUT_SOURCE5_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE6 */
ADI_REG_TYPE R22_SOUT_SOURCE6_IC_1_Default[REG_SOUT_SOURCE6_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE7 */
ADI_REG_TYPE R23_SOUT_SOURCE7_IC_1_Default[REG_SOUT_SOURCE7_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE8 */
ADI_REG_TYPE R24_SOUT_SOURCE8_IC_1_Default[REG_SOUT_SOURCE8_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE9 */
ADI_REG_TYPE R25_SOUT_SOURCE9_IC_1_Default[REG_SOUT_SOURCE9_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE10 */
ADI_REG_TYPE R26_SOUT_SOURCE10_IC_1_Default[REG_SOUT_SOURCE10_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE11 */
ADI_REG_TYPE R27_SOUT_SOURCE11_IC_1_Default[REG_SOUT_SOURCE11_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE12 */
ADI_REG_TYPE R28_SOUT_SOURCE12_IC_1_Default[REG_SOUT_SOURCE12_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE13 */
ADI_REG_TYPE R29_SOUT_SOURCE13_IC_1_Default[REG_SOUT_SOURCE13_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE14 */
ADI_REG_TYPE R30_SOUT_SOURCE14_IC_1_Default[REG_SOUT_SOURCE14_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE15 */
ADI_REG_TYPE R31_SOUT_SOURCE15_IC_1_Default[REG_SOUT_SOURCE15_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE16 */
ADI_REG_TYPE R32_SOUT_SOURCE16_IC_1_Default[REG_SOUT_SOURCE16_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE17 */
ADI_REG_TYPE R33_SOUT_SOURCE17_IC_1_Default[REG_SOUT_SOURCE17_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE18 */
ADI_REG_TYPE R34_SOUT_SOURCE18_IC_1_Default[REG_SOUT_SOURCE18_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE19 */
ADI_REG_TYPE R35_SOUT_SOURCE19_IC_1_Default[REG_SOUT_SOURCE19_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE20 */
ADI_REG_TYPE R36_SOUT_SOURCE20_IC_1_Default[REG_SOUT_SOURCE20_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE21 */
ADI_REG_TYPE R37_SOUT_SOURCE21_IC_1_Default[REG_SOUT_SOURCE21_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE22 */
ADI_REG_TYPE R38_SOUT_SOURCE22_IC_1_Default[REG_SOUT_SOURCE22_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SOUT_SOURCE23 */
ADI_REG_TYPE R39_SOUT_SOURCE23_IC_1_Default[REG_SOUT_SOURCE23_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.SERIAL_BYTE_0_0 */
ADI_REG_TYPE R40_SERIAL_BYTE_0_0_IC_1_Default[REG_SERIAL_BYTE_0_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_1_0 */
ADI_REG_TYPE R41_SERIAL_BYTE_1_0_IC_1_Default[REG_SERIAL_BYTE_1_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_2_0 */
ADI_REG_TYPE R42_SERIAL_BYTE_2_0_IC_1_Default[REG_SERIAL_BYTE_2_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_3_0 */
ADI_REG_TYPE R43_SERIAL_BYTE_3_0_IC_1_Default[REG_SERIAL_BYTE_3_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_4_0 */
ADI_REG_TYPE R44_SERIAL_BYTE_4_0_IC_1_Default[REG_SERIAL_BYTE_4_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_5_0 */
ADI_REG_TYPE R45_SERIAL_BYTE_5_0_IC_1_Default[REG_SERIAL_BYTE_5_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_6_0 */
ADI_REG_TYPE R46_SERIAL_BYTE_6_0_IC_1_Default[REG_SERIAL_BYTE_6_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SERIAL_BYTE_7_0 */
ADI_REG_TYPE R47_SERIAL_BYTE_7_0_IC_1_Default[REG_SERIAL_BYTE_7_0_IC_1_BYTE] = {
0x90, 0x00
};

/* Register Default - IC 1.SDATA_4_ROUTE */
ADI_REG_TYPE R48_SDATA_4_ROUTE_IC_1_Default[REG_SDATA_4_ROUTE_IC_1_BYTE] = {
0x00, 0x08
};

/* Register Default - IC 1.SDATA_5_ROUTE */
ADI_REG_TYPE R49_SDATA_5_ROUTE_IC_1_Default[REG_SDATA_5_ROUTE_IC_1_BYTE] = {
0x00, 0x30
};

/* Register Default - IC 1.SDATA_6_ROUTE */
ADI_REG_TYPE R50_SDATA_6_ROUTE_IC_1_Default[REG_SDATA_6_ROUTE_IC_1_BYTE] = {
0x00, 0x31
};

/* Register Default - IC 1.SDATA_7_ROUTE */
ADI_REG_TYPE R51_SDATA_7_ROUTE_IC_1_Default[REG_SDATA_7_ROUTE_IC_1_BYTE] = {
0x00, 0x32
};

/* Register Default - IC 1.KILL_CORE */
ADI_REG_TYPE R55_KILL_CORE_IC_1_Default[REG_KILL_CORE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.START_ADDRESS */
ADI_REG_TYPE R56_START_ADDRESS_IC_1_Default[REG_START_ADDRESS_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.START_PULSE */
ADI_REG_TYPE R57_START_PULSE_IC_1_Default[REG_START_PULSE_IC_1_BYTE] = {
0x00, 0x02
};

/* Register Default - IC 1.START_CORE */
ADI_REG_TYPE R58_START_CORE_IC_1_Default[REG_START_CORE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.START_CORE */
ADI_REG_TYPE R59_START_CORE_IC_1_Default[REG_START_CORE_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.Start Delay */
#define R60_START_DELAY_IC_1_ADDR 0x0
#define R60_START_DELAY_IC_1_SIZE 2
ADI_REG_TYPE R60_START_DELAY_IC_1_Default[R60_START_DELAY_IC_1_SIZE] = {
0x00, 0x01
};

/* Register Default - IC 1.HIBERNATE */
ADI_REG_TYPE R61_HIBERNATE_IC_1_Default[REG_HIBERNATE_IC_1_BYTE] = {
0x00, 0x00
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_1 62

void default_download_IC_1() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOFT_RESET_IC_1_ADDR, REG_SOFT_RESET_IC_1_BYTE, R0_SOFT_RESET_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOFT_RESET_IC_1_ADDR, REG_SOFT_RESET_IC_1_BYTE, R1_SOFT_RESET_IC_1_Default );
	SIGMA_WRITE_DELAY( DEVICE_ADDR_IC_1, R2_RESET_DELAY_IC_1_SIZE, R2_RESET_DELAY_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_HIBERNATE_IC_1_ADDR, REG_HIBERNATE_IC_1_BYTE, R3_HIBERNATE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_HIBERNATE_IC_1_ADDR, REG_HIBERNATE_IC_1_BYTE, R4_HIBERNATE_IC_1_Default );
	SIGMA_WRITE_DELAY( DEVICE_ADDR_IC_1, R5_HIBERNATE_DELAY_IC_1_SIZE, R5_HIBERNATE_DELAY_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_KILL_CORE_IC_1_ADDR, REG_KILL_CORE_IC_1_BYTE, R6_KILL_CORE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_KILL_CORE_IC_1_ADDR, REG_KILL_CORE_IC_1_BYTE, R7_KILL_CORE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLL_ENABLE_IC_1_ADDR, REG_PLL_ENABLE_IC_1_BYTE, R8_PLL_ENABLE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLL_CTRL1_IC_1_ADDR, REG_PLL_CTRL1_IC_1_BYTE, R9_PLL_CTRL1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLL_CLK_SRC_IC_1_ADDR, REG_PLL_CLK_SRC_IC_1_BYTE, R10_PLL_CLK_SRC_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_MCLK_OUT_IC_1_ADDR, REG_MCLK_OUT_IC_1_BYTE, R11_MCLK_OUT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLL_ENABLE_IC_1_ADDR, REG_PLL_ENABLE_IC_1_BYTE, R12_PLL_ENABLE_IC_1_Default );
	SIGMA_WRITE_DELAY( DEVICE_ADDR_IC_1, R13_PLL_LOCK_DELAY_IC_1_SIZE, R13_PLL_LOCK_DELAY_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_POWER_ENABLE0_IC_1_ADDR, REG_POWER_ENABLE0_IC_1_BYTE, R14_POWER_ENABLE0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_POWER_ENABLE1_IC_1_ADDR, REG_POWER_ENABLE1_IC_1_BYTE, R15_POWER_ENABLE1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE0_IC_1_ADDR, REG_SOUT_SOURCE0_IC_1_BYTE, R16_SOUT_SOURCE0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE1_IC_1_ADDR, REG_SOUT_SOURCE1_IC_1_BYTE, R17_SOUT_SOURCE1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE2_IC_1_ADDR, REG_SOUT_SOURCE2_IC_1_BYTE, R18_SOUT_SOURCE2_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE3_IC_1_ADDR, REG_SOUT_SOURCE3_IC_1_BYTE, R19_SOUT_SOURCE3_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE4_IC_1_ADDR, REG_SOUT_SOURCE4_IC_1_BYTE, R20_SOUT_SOURCE4_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE5_IC_1_ADDR, REG_SOUT_SOURCE5_IC_1_BYTE, R21_SOUT_SOURCE5_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE6_IC_1_ADDR, REG_SOUT_SOURCE6_IC_1_BYTE, R22_SOUT_SOURCE6_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE7_IC_1_ADDR, REG_SOUT_SOURCE7_IC_1_BYTE, R23_SOUT_SOURCE7_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE8_IC_1_ADDR, REG_SOUT_SOURCE8_IC_1_BYTE, R24_SOUT_SOURCE8_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE9_IC_1_ADDR, REG_SOUT_SOURCE9_IC_1_BYTE, R25_SOUT_SOURCE9_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE10_IC_1_ADDR, REG_SOUT_SOURCE10_IC_1_BYTE, R26_SOUT_SOURCE10_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE11_IC_1_ADDR, REG_SOUT_SOURCE11_IC_1_BYTE, R27_SOUT_SOURCE11_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE12_IC_1_ADDR, REG_SOUT_SOURCE12_IC_1_BYTE, R28_SOUT_SOURCE12_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE13_IC_1_ADDR, REG_SOUT_SOURCE13_IC_1_BYTE, R29_SOUT_SOURCE13_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE14_IC_1_ADDR, REG_SOUT_SOURCE14_IC_1_BYTE, R30_SOUT_SOURCE14_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE15_IC_1_ADDR, REG_SOUT_SOURCE15_IC_1_BYTE, R31_SOUT_SOURCE15_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE16_IC_1_ADDR, REG_SOUT_SOURCE16_IC_1_BYTE, R32_SOUT_SOURCE16_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE17_IC_1_ADDR, REG_SOUT_SOURCE17_IC_1_BYTE, R33_SOUT_SOURCE17_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE18_IC_1_ADDR, REG_SOUT_SOURCE18_IC_1_BYTE, R34_SOUT_SOURCE18_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE19_IC_1_ADDR, REG_SOUT_SOURCE19_IC_1_BYTE, R35_SOUT_SOURCE19_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE20_IC_1_ADDR, REG_SOUT_SOURCE20_IC_1_BYTE, R36_SOUT_SOURCE20_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE21_IC_1_ADDR, REG_SOUT_SOURCE21_IC_1_BYTE, R37_SOUT_SOURCE21_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE22_IC_1_ADDR, REG_SOUT_SOURCE22_IC_1_BYTE, R38_SOUT_SOURCE22_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SOUT_SOURCE23_IC_1_ADDR, REG_SOUT_SOURCE23_IC_1_BYTE, R39_SOUT_SOURCE23_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_0_0_IC_1_ADDR, REG_SERIAL_BYTE_0_0_IC_1_BYTE, R40_SERIAL_BYTE_0_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_1_0_IC_1_ADDR, REG_SERIAL_BYTE_1_0_IC_1_BYTE, R41_SERIAL_BYTE_1_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_2_0_IC_1_ADDR, REG_SERIAL_BYTE_2_0_IC_1_BYTE, R42_SERIAL_BYTE_2_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_3_0_IC_1_ADDR, REG_SERIAL_BYTE_3_0_IC_1_BYTE, R43_SERIAL_BYTE_3_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_4_0_IC_1_ADDR, REG_SERIAL_BYTE_4_0_IC_1_BYTE, R44_SERIAL_BYTE_4_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_5_0_IC_1_ADDR, REG_SERIAL_BYTE_5_0_IC_1_BYTE, R45_SERIAL_BYTE_5_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_6_0_IC_1_ADDR, REG_SERIAL_BYTE_6_0_IC_1_BYTE, R46_SERIAL_BYTE_6_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_BYTE_7_0_IC_1_ADDR, REG_SERIAL_BYTE_7_0_IC_1_BYTE, R47_SERIAL_BYTE_7_0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SDATA_4_ROUTE_IC_1_ADDR, REG_SDATA_4_ROUTE_IC_1_BYTE, R48_SDATA_4_ROUTE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SDATA_5_ROUTE_IC_1_ADDR, REG_SDATA_5_ROUTE_IC_1_BYTE, R49_SDATA_5_ROUTE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SDATA_6_ROUTE_IC_1_ADDR, REG_SDATA_6_ROUTE_IC_1_BYTE, R50_SDATA_6_ROUTE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SDATA_7_ROUTE_IC_1_ADDR, REG_SDATA_7_ROUTE_IC_1_BYTE, R51_SDATA_7_ROUTE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, PROGRAM_ADDR_IC_1, PROGRAM_SIZE_IC_1, Program_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, PARAM_ADDR_IC_1, PARAM_SIZE_IC_1, Param_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, DM1_DATA_ADDR_IC_1, DM1_DATA_SIZE_IC_1, DM1_DATA_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_KILL_CORE_IC_1_ADDR, REG_KILL_CORE_IC_1_BYTE, R55_KILL_CORE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_ADDRESS_IC_1_ADDR, REG_START_ADDRESS_IC_1_BYTE, R56_START_ADDRESS_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_PULSE_IC_1_ADDR, REG_START_PULSE_IC_1_BYTE, R57_START_PULSE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_CORE_IC_1_ADDR, REG_START_CORE_IC_1_BYTE, R58_START_CORE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_CORE_IC_1_ADDR, REG_START_CORE_IC_1_BYTE, R59_START_CORE_IC_1_Default );
	SIGMA_WRITE_DELAY( DEVICE_ADDR_IC_1, R60_START_DELAY_IC_1_SIZE, R60_START_DELAY_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_HIBERNATE_IC_1_ADDR, REG_HIBERNATE_IC_1_BYTE, R61_HIBERNATE_IC_1_Default );
}

#endif