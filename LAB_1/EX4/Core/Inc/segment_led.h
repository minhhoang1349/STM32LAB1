/*
 * segment_led.h
 *
 *  Created on: Oct 12, 2023
 *      Author: NGUYEN MINH HOANG
 */

#ifndef SEGMENT_LED_H_
#define SEGMENT_LED_H_

#include <stdint.h>
#include "main.h"
struct seven_led {
	uint16_t a;
	uint16_t b;
	uint16_t c;
	uint16_t d;
	uint16_t e;
	uint16_t f;
	uint16_t g;

};
void init7SEG(struct seven_led *led, uint16_t aa, uint16_t bb, uint16_t cc,
		uint16_t dd, uint16_t ee, uint16_t ff, uint16_t gg);
void display7SEG(struct seven_led *led, unsigned short i);
#endif /* SEGMENT_LED_H_ */
