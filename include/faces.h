// *************************************************************************
//
// Copyright (c) 2022 Andrei Gramakov. All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
// 
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

//Define the height and width of the jpeg file. Make sure this matches the actual jpeg
//dimensions.
#define IMAGE_W 336
#define IMAGE_H 256

//Reference the binary-included jpeg file
extern const uint8_t ANGRY_JPG[] asm("_binary_angry_jpg_start");
extern const uint8_t ANGRY_JPG_END[] asm("_binary_angry_jpg_end");

extern const uint8_t BLINK_JPG[] asm("_binary_blink_jpg_start");
extern const uint8_t BLINK_JPG_END[] asm("_binary_blink_jpg_end");

extern const uint8_t CALM_JPG[] asm("_binary_calm_jpg_start");
extern const uint8_t CALM_JPG_END[] asm("_binary_calm_jpg_end");

extern const uint8_t HAPPY_JPG[] asm("_binary_happy_jpg_start");
extern const uint8_t HAPPY_JPG_END[] asm("_binary_happy_jpg_end");

extern const uint8_t SAD_JPG[] asm("_binary_sad_jpg_start");
extern const uint8_t SAD_JPG_END[] asm("_binary_sad_jpg_end");


#ifdef __cplusplus
}
#endif
