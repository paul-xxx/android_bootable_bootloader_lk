/* Copyright (c) 2013-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT35521_720P_VIDEO_H_

#define _PANEL_NT35521_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config nt35521_720p_video_panel_data = {
  "qcom,mdss_dsi_nt35521_720p_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 424000000, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35521_720p_video_panel_res = {
  720, 1280, 120, 120, 8, 0, 20, 20, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35521_720p_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char nt35521_720p_video_on_cmd0[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd1[] = {
0x05, 0x00, 0x29, 0xC0,
0xFF, 0xAA, 0x55, 0xA5,
0x80, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd2[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x68, 0x21, 0xFF,  };


static char nt35521_720p_video_on_cmd3[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x01, 0xA3, 0x20,
0x10, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd4[] = {
0x6F, 0x02, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd5[] = {
0xB8, 0x08, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd6[] = {
0x03, 0x00, 0x29, 0xC0,
0xBB, 0x11, 0x11, 0xFF,  };


static char nt35521_720p_video_on_cmd7[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd8[] = {
0xB6, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd9[] = {
0x03, 0x00, 0x29, 0xC0,
0xD9, 0x03, 0x09, 0xFF,  };


static char nt35521_720p_video_on_cmd10[] = {
0xC8, 0x83, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd11[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd12[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x0F, 0x0F, 0xFF,  };


static char nt35521_720p_video_on_cmd13[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x0F, 0x0F, 0xFF,  };


static char nt35521_720p_video_on_cmd14[] = {
0xCE, 0x66, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd15[] = {
0xC0, 0x0C, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd16[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x05, 0x05, 0xFF,  };


static char nt35521_720p_video_on_cmd17[] = {
0xBE, 0x48, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd18[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x28, 0x28, 0xFF,  };


static char nt35521_720p_video_on_cmd19[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x19, 0x19, 0xFF,  };


static char nt35521_720p_video_on_cmd20[] = {
0x03, 0x00, 0x29, 0xC0,
0xB9, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd21[] = {
0x03, 0x00, 0x29, 0xC0,
0xBA, 0x24, 0x24, 0xFF,  };


static char nt35521_720p_video_on_cmd22[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x70, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd23[] = {
0x03, 0x00, 0x29, 0xC0,
0xBD, 0x70, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd24[] = {
0xCA, 0x00, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd25[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x02, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd26[] = {
0xEE, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd27[] = {
0x11, 0x00, 0x29, 0xC0,
0xB0, 0x00, 0x00, 0x00,
0x3E, 0x00, 0x67, 0x00,
0x92, 0x00, 0xAE, 0x00,
0xD6, 0x00, 0xF3, 0x01,
0x25, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd28[] = {
0x11, 0x00, 0x29, 0xC0,
0xB1, 0x01, 0x4C, 0x01,
0x88, 0x01, 0xB8, 0x02,
0x03, 0x02, 0x40, 0x02,
0x42, 0x02, 0x75, 0x02,
0xAF, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd29[] = {
0x11, 0x00, 0x29, 0xC0,
0xB2, 0x02, 0xD7, 0x03,
0x00, 0x03, 0x1B, 0x03,
0x47, 0x03, 0x5D, 0x03,
0x7A, 0x03, 0x95, 0x03,
0xA6, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd30[] = {
0x05, 0x00, 0x29, 0xC0,
0xB3, 0x03, 0xEA, 0x03,
0xFF, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd31[] = {
0x6F, 0x02, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd32[] = {
0xF8, 0x44, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd33[] = {
0x6F, 0x0F, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd34[] = {
0xFA, 0x14, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd35[] = {
0x6F, 0x02, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd36[] = {
0xF7, 0xEF, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd37[] = {
0x6F, 0x0A, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd38[] = {
0xF7, 0x02, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd39[] = {
0x6F, 0x0C, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd40[] = {
0xF4, 0xD8, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd41[] = {
0x6F, 0x0E, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd42[] = {
0xF4, 0x44, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd43[] = {
0x6F, 0x17, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd44[] = {
0xF4, 0x60, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd45[] = {
0x6F, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd46[] = {
0xF9, 0x46, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd47[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x06, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd48[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd49[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd50[] = {
0x03, 0x00, 0x29, 0xC0,
0xB2, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd51[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x2E, 0x09, 0xFF,  };


static char nt35521_720p_video_on_cmd52[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x0B, 0x11, 0xFF,  };


static char nt35521_720p_video_on_cmd53[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x17, 0x19, 0xFF,  };


static char nt35521_720p_video_on_cmd54[] = {
0x03, 0x00, 0x29, 0xC0,
0xB6, 0x23, 0x1D, 0xFF,  };


static char nt35521_720p_video_on_cmd55[] = {
0x03, 0x00, 0x29, 0xC0,
0xB7, 0x25, 0x1F, 0xFF,  };


static char nt35521_720p_video_on_cmd56[] = {
0x03, 0x00, 0x29, 0xC0,
0xB8, 0x01, 0x03, 0xFF,  };


static char nt35521_720p_video_on_cmd57[] = {
0x03, 0x00, 0x29, 0xC0,
0xB9, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd58[] = {
0x03, 0x00, 0x29, 0xC0,
0xBA, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd59[] = {
0x03, 0x00, 0x29, 0xC0,
0xBB, 0x02, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd60[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x1E, 0x24, 0xFF,  };


static char nt35521_720p_video_on_cmd61[] = {
0x03, 0x00, 0x29, 0xC0,
0xBD, 0x1C, 0x22, 0xFF,  };


static char nt35521_720p_video_on_cmd62[] = {
0x03, 0x00, 0x29, 0xC0,
0xBE, 0x18, 0x16, 0xFF,  };


static char nt35521_720p_video_on_cmd63[] = {
0x03, 0x00, 0x29, 0xC0,
0xBF, 0x10, 0x0A, 0xFF,  };


static char nt35521_720p_video_on_cmd64[] = {
0x03, 0x00, 0x29, 0xC0,
0xC0, 0x08, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd65[] = {
0x03, 0x00, 0x29, 0xC0,
0xC1, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd66[] = {
0x03, 0x00, 0x29, 0xC0,
0xC2, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd67[] = {
0x03, 0x00, 0x29, 0xC0,
0xC3, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd68[] = {
0x03, 0x00, 0x29, 0xC0,
0xE5, 0x13, 0x12, 0xFF,  };


static char nt35521_720p_video_on_cmd69[] = {
0x03, 0x00, 0x29, 0xC0,
0xC4, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd70[] = {
0x03, 0x00, 0x29, 0xC0,
0xC5, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd71[] = {
0x03, 0x00, 0x29, 0xC0,
0xC6, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd72[] = {
0x03, 0x00, 0x29, 0xC0,
0xC7, 0x2E, 0x02, 0xFF,  };


static char nt35521_720p_video_on_cmd73[] = {
0x03, 0x00, 0x29, 0xC0,
0xC8, 0x00, 0x18, 0xFF,  };


static char nt35521_720p_video_on_cmd74[] = {
0x03, 0x00, 0x29, 0xC0,
0xC9, 0x12, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd75[] = {
0x03, 0x00, 0x29, 0xC0,
0xCA, 0x24, 0x1E, 0xFF,  };


static char nt35521_720p_video_on_cmd76[] = {
0x03, 0x00, 0x29, 0xC0,
0xCB, 0x22, 0x1C, 0xFF,  };


static char nt35521_720p_video_on_cmd77[] = {
0x03, 0x00, 0x29, 0xC0,
0xCC, 0x0A, 0x08, 0xFF,  };


static char nt35521_720p_video_on_cmd78[] = {
0x03, 0x00, 0x29, 0xC0,
0xCD, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd79[] = {
0x03, 0x00, 0x29, 0xC0,
0xCE, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd80[] = {
0x03, 0x00, 0x29, 0xC0,
0xCF, 0x09, 0x0B, 0xFF,  };


static char nt35521_720p_video_on_cmd81[] = {
0x03, 0x00, 0x29, 0xC0,
0xD0, 0x1D, 0x23, 0xFF,  };


static char nt35521_720p_video_on_cmd82[] = {
0x03, 0x00, 0x29, 0xC0,
0xD1, 0x1F, 0x25, 0xFF,  };


static char nt35521_720p_video_on_cmd83[] = {
0x03, 0x00, 0x29, 0xC0,
0xD2, 0x11, 0x13, 0xFF,  };


static char nt35521_720p_video_on_cmd84[] = {
0x03, 0x00, 0x29, 0xC0,
0xD3, 0x19, 0x01, 0xFF,  };


static char nt35521_720p_video_on_cmd85[] = {
0x03, 0x00, 0x29, 0xC0,
0xD4, 0x03, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd86[] = {
0x03, 0x00, 0x29, 0xC0,
0xD5, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd87[] = {
0x03, 0x00, 0x29, 0xC0,
0xD6, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd88[] = {
0x03, 0x00, 0x29, 0xC0,
0xD7, 0x2E, 0x2E, 0xFF,  };


static char nt35521_720p_video_on_cmd89[] = {
0x03, 0x00, 0x29, 0xC0,
0xE6, 0x16, 0x17, 0xFF,  };


static char nt35521_720p_video_on_cmd90[] = {
0x06, 0x00, 0x29, 0xC0,
0xD8, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd91[] = {
0x06, 0x00, 0x29, 0xC0,
0xD9, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd92[] = {
0xE7, 0x00, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd93[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd94[] = {
0xED, 0x30, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd95[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd96[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x20, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd97[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x20, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd98[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd99[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd100[] = {
0xB8, 0x00, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd101[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x0F, 0x03, 0x03,
0x00, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd102[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd103[] = {
0x03, 0x00, 0x29, 0xC0,
0xB9, 0x00, 0x03, 0xFF,  };


static char nt35521_720p_video_on_cmd104[] = {
0x03, 0x00, 0x29, 0xC0,
0xB2, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd105[] = {
0x03, 0x00, 0x29, 0xC0,
0xBA, 0x00, 0x03, 0xFF,  };


static char nt35521_720p_video_on_cmd106[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd107[] = {
0x03, 0x00, 0x29, 0xC0,
0xBB, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd108[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd109[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd110[] = {
0x03, 0x00, 0x29, 0xC0,
0xB6, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd111[] = {
0x03, 0x00, 0x29, 0xC0,
0xB7, 0x17, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd112[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x00, 0x01, 0xFF,  };


static char nt35521_720p_video_on_cmd113[] = {
0xE5, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd114[] = {
0xE6, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd115[] = {
0xE7, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd116[] = {
0xE8, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd117[] = {
0xE9, 0x0A, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd118[] = {
0xEA, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd119[] = {
0xEB, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd120[] = {
0xEC, 0x06, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd121[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd122[] = {
0xC0, 0x07, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd123[] = {
0xC1, 0x05, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd124[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd125[] = {
0x06, 0x00, 0x29, 0xC0,
0xB2, 0x04, 0x00, 0x52,
0x01, 0x51, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd126[] = {
0x06, 0x00, 0x29, 0xC0,
0xB3, 0x04, 0x00, 0x52,
0x01, 0x51, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd127[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd128[] = {
0xC4, 0x82, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd129[] = {
0xC5, 0x80, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd130[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd131[] = {
0x06, 0x00, 0x29, 0xC0,
0xB6, 0x04, 0x00, 0x52,
0x01, 0x51, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd132[] = {
0x06, 0x00, 0x29, 0xC0,
0xB7, 0x04, 0x00, 0x52,
0x01, 0x51, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd133[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd134[] = {
0x03, 0x00, 0x29, 0xC0,
0xC8, 0x03, 0x20, 0xFF,  };


static char nt35521_720p_video_on_cmd135[] = {
0x03, 0x00, 0x29, 0xC0,
0xC9, 0x01, 0x21, 0xFF,  };


static char nt35521_720p_video_on_cmd136[] = {
0x03, 0x00, 0x29, 0xC0,
0xCA, 0x03, 0x20, 0xFF,  };


static char nt35521_720p_video_on_cmd137[] = {
0x03, 0x00, 0x29, 0xC0,
0xCB, 0x07, 0x20, 0xFF,  };


static char nt35521_720p_video_on_cmd138[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd139[] = {
0x06, 0x00, 0x29, 0xC0,
0xBA, 0x44, 0x00, 0x60,
0x01, 0x72, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd140[] = {
0x06, 0x00, 0x29, 0xC0,
0xBB, 0x44, 0x00, 0x60,
0x01, 0x72, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd141[] = {
0x06, 0x00, 0x29, 0xC0,
0xBC, 0x53, 0x00, 0x03,
0x00, 0x48, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd142[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x53, 0x00, 0x03,
0x00, 0x48, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd143[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd144[] = {
0x0C, 0x00, 0x29, 0xC0,
0xD1, 0x03, 0x05, 0x00,
0x05, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,  };


static char nt35521_720p_video_on_cmd145[] = {
0x0C, 0x00, 0x29, 0xC0,
0xD2, 0x03, 0x05, 0x00,
0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,  };


static char nt35521_720p_video_on_cmd146[] = {
0x0C, 0x00, 0x29, 0xC0,
0xD3, 0x00, 0x05, 0x04,
0x05, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,  };


static char nt35521_720p_video_on_cmd147[] = {
0x0C, 0x00, 0x29, 0xC0,
0xD4, 0x00, 0x05, 0x04,
0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,  };


static char nt35521_720p_video_on_cmd148[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd149[] = {
0xC4, 0x40, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd150[] = {
0xC5, 0x40, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd151[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd152[] = {
0x6F, 0x08, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd153[] = {
0xF2, 0x70, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd154[] = {
0x6F, 0x02, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd155[] = {
0xB8, 0x08, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd156[] = {
0x6F, 0x07, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd157[] = {
0xF4, 0xF0, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd158[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd159[] = {
0xCB, 0x92, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd160[] = {
0xCD, 0x08, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd161[] = {
0x6F, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd162[] = {
0xCD, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd163[] = {
0x6F, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd164[] = {
0xCB, 0x8A, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd165[] = {
0xBF, 0x60, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd166[] = {
0xD3, 0x40, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd167[] = {
0x6F, 0x11, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd168[] = {
0xF3, 0x01, 0x23, 0x80,  };


static char nt35521_720p_video_on_cmd169[] = {
0x11, 0x00, 0x05, 0x80,  };


static char nt35521_720p_video_on_cmd170[] = {
0x29, 0x00, 0x05, 0x80,  };


static char nt35521_720p_video_on_cmd171[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd172[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd173[] = {
0x02, 0x00, 0x29, 0xC0,
0x53, 0x2C, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd174[] = {
0x02, 0x00, 0x29, 0xC0,
0x51, 0xB4, 0xFF, 0xFF,  };



static struct mipi_dsi_cmd nt35521_720p_video_on_command[] = {
{ 0xc , nt35521_720p_video_on_cmd0},
{ 0xc , nt35521_720p_video_on_cmd1},
{ 0x8 , nt35521_720p_video_on_cmd2},
{ 0xc , nt35521_720p_video_on_cmd3},
{ 0x4 , nt35521_720p_video_on_cmd4},
{ 0x4 , nt35521_720p_video_on_cmd5},
{ 0x8 , nt35521_720p_video_on_cmd6},
{ 0x8 , nt35521_720p_video_on_cmd7},
{ 0x4 , nt35521_720p_video_on_cmd8},
{ 0x8 , nt35521_720p_video_on_cmd9},
{ 0x4 , nt35521_720p_video_on_cmd10},
{ 0xc , nt35521_720p_video_on_cmd11},
{ 0x8 , nt35521_720p_video_on_cmd12},
{ 0x8 , nt35521_720p_video_on_cmd13},
{ 0x4 , nt35521_720p_video_on_cmd14},
{ 0x4 , nt35521_720p_video_on_cmd15},
{ 0x8 , nt35521_720p_video_on_cmd16},
{ 0x4 , nt35521_720p_video_on_cmd17},
{ 0x8 , nt35521_720p_video_on_cmd18},
{ 0x8 , nt35521_720p_video_on_cmd19},
{ 0x8 , nt35521_720p_video_on_cmd20},
{ 0x8 , nt35521_720p_video_on_cmd21},
{ 0x8 , nt35521_720p_video_on_cmd22},
{ 0x8 , nt35521_720p_video_on_cmd23},
{ 0x4 , nt35521_720p_video_on_cmd24},
{ 0xc , nt35521_720p_video_on_cmd25},
{ 0x4 , nt35521_720p_video_on_cmd26},
{ 0x18 , nt35521_720p_video_on_cmd27},
{ 0x18 , nt35521_720p_video_on_cmd28},
{ 0x18 , nt35521_720p_video_on_cmd29},
{ 0xc , nt35521_720p_video_on_cmd30},
{ 0x4 , nt35521_720p_video_on_cmd31},
{ 0x4 , nt35521_720p_video_on_cmd32},
{ 0x4 , nt35521_720p_video_on_cmd33},
{ 0x4 , nt35521_720p_video_on_cmd34},
{ 0x4 , nt35521_720p_video_on_cmd35},
{ 0x4 , nt35521_720p_video_on_cmd36},
{ 0x4 , nt35521_720p_video_on_cmd37},
{ 0x4 , nt35521_720p_video_on_cmd38},
{ 0x4 , nt35521_720p_video_on_cmd39},
{ 0x4 , nt35521_720p_video_on_cmd40},
{ 0x4 , nt35521_720p_video_on_cmd41},
{ 0x4 , nt35521_720p_video_on_cmd42},
{ 0x4 , nt35521_720p_video_on_cmd43},
{ 0x4 , nt35521_720p_video_on_cmd44},
{ 0x4 , nt35521_720p_video_on_cmd45},
{ 0x4 , nt35521_720p_video_on_cmd46},
{ 0xc , nt35521_720p_video_on_cmd47},
{ 0x8 , nt35521_720p_video_on_cmd48},
{ 0x8 , nt35521_720p_video_on_cmd49},
{ 0x8 , nt35521_720p_video_on_cmd50},
{ 0x8 , nt35521_720p_video_on_cmd51},
{ 0x8 , nt35521_720p_video_on_cmd52},
{ 0x8 , nt35521_720p_video_on_cmd53},
{ 0x8 , nt35521_720p_video_on_cmd54},
{ 0x8 , nt35521_720p_video_on_cmd55},
{ 0x8 , nt35521_720p_video_on_cmd56},
{ 0x8 , nt35521_720p_video_on_cmd57},
{ 0x8 , nt35521_720p_video_on_cmd58},
{ 0x8 , nt35521_720p_video_on_cmd59},
{ 0x8 , nt35521_720p_video_on_cmd60},
{ 0x8 , nt35521_720p_video_on_cmd61},
{ 0x8 , nt35521_720p_video_on_cmd62},
{ 0x8 , nt35521_720p_video_on_cmd63},
{ 0x8 , nt35521_720p_video_on_cmd64},
{ 0x8 , nt35521_720p_video_on_cmd65},
{ 0x8 , nt35521_720p_video_on_cmd66},
{ 0x8 , nt35521_720p_video_on_cmd67},
{ 0x8 , nt35521_720p_video_on_cmd68},
{ 0x8 , nt35521_720p_video_on_cmd69},
{ 0x8 , nt35521_720p_video_on_cmd70},
{ 0x8 , nt35521_720p_video_on_cmd71},
{ 0x8 , nt35521_720p_video_on_cmd72},
{ 0x8 , nt35521_720p_video_on_cmd73},
{ 0x8 , nt35521_720p_video_on_cmd74},
{ 0x8 , nt35521_720p_video_on_cmd75},
{ 0x8 , nt35521_720p_video_on_cmd76},
{ 0x8 , nt35521_720p_video_on_cmd77},
{ 0x8 , nt35521_720p_video_on_cmd78},
{ 0x8 , nt35521_720p_video_on_cmd79},
{ 0x8 , nt35521_720p_video_on_cmd80},
{ 0x8 , nt35521_720p_video_on_cmd81},
{ 0x8 , nt35521_720p_video_on_cmd82},
{ 0x8 , nt35521_720p_video_on_cmd83},
{ 0x8 , nt35521_720p_video_on_cmd84},
{ 0x8 , nt35521_720p_video_on_cmd85},
{ 0x8 , nt35521_720p_video_on_cmd86},
{ 0x8 , nt35521_720p_video_on_cmd87},
{ 0x8 , nt35521_720p_video_on_cmd88},
{ 0x8 , nt35521_720p_video_on_cmd89},
{ 0xc , nt35521_720p_video_on_cmd90},
{ 0xc , nt35521_720p_video_on_cmd91},
{ 0x4 , nt35521_720p_video_on_cmd92},
{ 0xc , nt35521_720p_video_on_cmd93},
{ 0x4 , nt35521_720p_video_on_cmd94},
{ 0xc , nt35521_720p_video_on_cmd95},
{ 0x8 , nt35521_720p_video_on_cmd96},
{ 0x8 , nt35521_720p_video_on_cmd97},
{ 0xc , nt35521_720p_video_on_cmd98},
{ 0x8 , nt35521_720p_video_on_cmd99},
{ 0x4 , nt35521_720p_video_on_cmd100},
{ 0xc , nt35521_720p_video_on_cmd101},
{ 0x8 , nt35521_720p_video_on_cmd102},
{ 0x8 , nt35521_720p_video_on_cmd103},
{ 0x8 , nt35521_720p_video_on_cmd104},
{ 0x8 , nt35521_720p_video_on_cmd105},
{ 0x8 , nt35521_720p_video_on_cmd106},
{ 0x8 , nt35521_720p_video_on_cmd107},
{ 0x8 , nt35521_720p_video_on_cmd108},
{ 0x8 , nt35521_720p_video_on_cmd109},
{ 0x8 , nt35521_720p_video_on_cmd110},
{ 0x8 , nt35521_720p_video_on_cmd111},
{ 0x8 , nt35521_720p_video_on_cmd112},
{ 0x4 , nt35521_720p_video_on_cmd113},
{ 0x4 , nt35521_720p_video_on_cmd114},
{ 0x4 , nt35521_720p_video_on_cmd115},
{ 0x4 , nt35521_720p_video_on_cmd116},
{ 0x4 , nt35521_720p_video_on_cmd117},
{ 0x4 , nt35521_720p_video_on_cmd118},
{ 0x4 , nt35521_720p_video_on_cmd119},
{ 0x4 , nt35521_720p_video_on_cmd120},
{ 0xc , nt35521_720p_video_on_cmd121},
{ 0x4 , nt35521_720p_video_on_cmd122},
{ 0x4 , nt35521_720p_video_on_cmd123},
{ 0xc , nt35521_720p_video_on_cmd124},
{ 0xc , nt35521_720p_video_on_cmd125},
{ 0xc , nt35521_720p_video_on_cmd126},
{ 0xc , nt35521_720p_video_on_cmd127},
{ 0x4 , nt35521_720p_video_on_cmd128},
{ 0x4 , nt35521_720p_video_on_cmd129},
{ 0xc , nt35521_720p_video_on_cmd130},
{ 0xc , nt35521_720p_video_on_cmd131},
{ 0xc , nt35521_720p_video_on_cmd132},
{ 0xc , nt35521_720p_video_on_cmd133},
{ 0x8 , nt35521_720p_video_on_cmd134},
{ 0x8 , nt35521_720p_video_on_cmd135},
{ 0x8 , nt35521_720p_video_on_cmd136},
{ 0x8 , nt35521_720p_video_on_cmd137},
{ 0xc , nt35521_720p_video_on_cmd138},
{ 0xc , nt35521_720p_video_on_cmd139},
{ 0xc , nt35521_720p_video_on_cmd140},
{ 0xc , nt35521_720p_video_on_cmd141},
{ 0xc , nt35521_720p_video_on_cmd142},
{ 0xc , nt35521_720p_video_on_cmd143},
{ 0x10 , nt35521_720p_video_on_cmd144},
{ 0x10 , nt35521_720p_video_on_cmd145},
{ 0x10 , nt35521_720p_video_on_cmd146},
{ 0x10 , nt35521_720p_video_on_cmd147},
{ 0xc , nt35521_720p_video_on_cmd148},
{ 0x4 , nt35521_720p_video_on_cmd149},
{ 0x4 , nt35521_720p_video_on_cmd150},
{ 0xc , nt35521_720p_video_on_cmd151},
{ 0x4 , nt35521_720p_video_on_cmd152},
{ 0x4 , nt35521_720p_video_on_cmd153},
{ 0x4 , nt35521_720p_video_on_cmd154},
{ 0x4 , nt35521_720p_video_on_cmd155},
{ 0x4 , nt35521_720p_video_on_cmd156},
{ 0x4 , nt35521_720p_video_on_cmd157},
{ 0xc , nt35521_720p_video_on_cmd158},
{ 0x4 , nt35521_720p_video_on_cmd159},
{ 0x4 , nt35521_720p_video_on_cmd160},
{ 0x4 , nt35521_720p_video_on_cmd161},
{ 0x4 , nt35521_720p_video_on_cmd162},
{ 0x4 , nt35521_720p_video_on_cmd163},
{ 0x4 , nt35521_720p_video_on_cmd164},
{ 0x4 , nt35521_720p_video_on_cmd165},
{ 0x4 , nt35521_720p_video_on_cmd166},
{ 0x4 , nt35521_720p_video_on_cmd167},
{ 0x4 , nt35521_720p_video_on_cmd168},
{ 0x4 , nt35521_720p_video_on_cmd169},
{ 0x4 , nt35521_720p_video_on_cmd170},
{ 0xc , nt35521_720p_video_on_cmd171},
{ 0xc , nt35521_720p_video_on_cmd172},
{ 0x8 , nt35521_720p_video_on_cmd173},
{ 0x8 , nt35521_720p_video_on_cmd174},
};
#define NT35521_720P_VIDEO_ON_COMMAND 175


static char nt35521_720p_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char nt35521_720p_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd nt35521_720p_video_off_command[] = {
{ 0x4 , nt35521_720p_videooff_cmd0},
{ 0x4 , nt35521_720p_videooff_cmd1}
};
#define NT35521_720P_VIDEO_OFF_COMMAND 2


static struct command_state nt35521_720p_video_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info nt35521_720p_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info nt35521_720p_video_video_panel = {
  1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration nt35521_720p_video_lane_config = {
  4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t nt35521_720p_video_timings[] = {
  0x37, 0x1c, 0x12, 0x00, 0x42, 0x44, 0x18, 0x20, 0x17, 0x03, 0x04, 0x00
};



static struct mipi_dsi_cmd nt35521_720p_video_rotation[] = {

};
#define NT35521_720P_VIDEO_ROTATION 0


static struct panel_timing nt35521_720p_video_timing_info = {
  0, 4, 0x20, 0x2D
};

static struct panel_reset_sequence nt35521_720p_video_panel_reset_seq = {
{ 1, 0, 1, }, { 20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight nt35521_720p_video_backlight = {
  1, 1, 4095, 100, 2, "BL_DCS"
};


#endif /*_NT35521_720P_VIDEO_H_*/
