CC=clang
CFLAGS=-std=c99 -Wall -Wextra -g

all: diviseurs

.PHONY: clean check

check:
	make -C tests/ check

clean:
	rm -f *~ *.o diviseurs
