#pragma once
#include <stdint.h>
#include <stdio.h>

struct dice {
	uint8_t sides;
	uint8_t value;
	uint8_t (*roll)(void);
};


void init_dice(struct dice *d);

