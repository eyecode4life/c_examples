#include <dice.h>

int main(int argc, char* argv[]) {
	struct dice mydice;
	init_dice(&mydice);
	uint8_t r = mydice.roll();
	printf("The random value: %d\n",r);
	return 0;
}
