CC=clang
CFLAGS=-std=c99 -Wall -Wextra -g

all: test_tableau

test_tableau: test_tableau.o tableau.o

tableau.o: tableau.c tableau.h

.PHONY: clean
clean:
	rm -f *~ *.o test_tableau
