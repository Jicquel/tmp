CC=clang
CFLAGS=-std=c99 -Wall -Wextra -g

all: big-brother

.PHONY: clean check

check:
	make -C tests/ check

clean:
	rm -f *~ *.o big-brother
