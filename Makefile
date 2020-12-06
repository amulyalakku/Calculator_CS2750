CC = gcc
CFLAGS = -Wall
DEPS = addition.h addition.c subtraction.h subtraction.c multiplication.h multiplication.c division.h division.c modulus.h modulus.c tests.h tests.c calculatorOps.c
OBJ = calculatorOps.o tests.o modulus.o division.o multiplication.o subtraction.o addition.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

calculatorOps: $(OBJ)
	gcc $(CFLAGS) -o $@ $^
