
LDFLAGS := -I../src/
CFLAGS :=
CC := gcc

TEST := test

all : dice_test

%.o : %.c
	$(CC) -c $^ $(LDFLAGS)

dice_test : ../src/dice.o dice_test.o
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	rm dice_test *.o




