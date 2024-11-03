
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

static time_t seed;

uint8_t roll_dice(void) {
	if(!seed) {
		printf("Seed is NULL\n");
		seed = time(NULL);
		srandom(seed);
	}
	return random() % 6 + 1;
}

int main(int argc, char* argv[]) {
	uint8_t r = roll_dice();
	printf("The random value: %d\n",r);
	return 0;
}
