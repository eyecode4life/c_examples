
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

static time_t seed;

struct dice {
	uint8_t sides;
	uint8_t value;
	uint8_t (*roll)(void);
};

uint8_t roll_dice(void) {
	if(!seed) {
		printf("Seed is NULL\n");
		seed = time(NULL);
		srandom(seed);
	}
	return random() % 6 + 1;
}

int main(int argc, char* argv[]) {
	struct dice mydice;
	mydice.roll = &roll_dice;
	uint8_t r = mydice.roll();
	printf("The random value: %d\n",r);
	return 0;
}
