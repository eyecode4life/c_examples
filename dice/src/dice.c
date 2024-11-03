
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stdarg.h>
#include "dice.h"
/*
* 1.  Create Hello world
* 2.  Create random
* 3.  Update random seed with time
* 4.  Move logict to roll dice
* 5.  Crate a struct and function pointer to struct
* 6.  Create a constructor (malloc) and destructor (free)
*
*
*
*/

static time_t seed;


static void advanced_assert_fail( const char *filename, unsigned line_number,
const char *function, const char *message, ...) {
	va_list args;
	va_start(args, message);
	fprintf(stderr, "%s:%d:%s -- ", filename, line_number, function);
	vfprintf(stderr, message, args);
	va_end(args);
	abort();
}

uint8_t roll_dice(void) {
	return random() % 6 + 1;
}

void init_dice(struct dice *d) {
	if (d == NULL) {
		advanced_assert_fail(__FILE__,__LINE__,__func__,"The assert failed\n");
	}
	if(!seed) {
		seed = time(NULL);
		srandom(seed);
	}
	d->roll = &roll_dice;
}

/*int main(int argc, char* argv[]) {*/
/*	struct dice mydice;*/
/*	init_dice(&mydice);*/
/*	uint8_t r = mydice.roll();*/
/*	printf("The random value: %d\n",r);*/
/*	return 0;*/
/*}*/
