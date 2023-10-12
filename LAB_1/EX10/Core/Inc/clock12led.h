/*
 * clock12led.h
 *
 *  Created on: Oct 12, 2023
 *      Author: NGUYEN MINH HOANG
 */
#ifndef MYLIB_CLOCK12LED_H_
#define MYLIB_CLOCK12LED_H_
#include"main.h"
void clearAllClock();
void setNumberOnClock(uint8_t num);
void clearNumberOnClock(uint8_t num);
void SetClock(uint8_t hour, uint8_t minute, uint8_t second);
#endif /* MYLIB_CLOCK12LED_H_ */
