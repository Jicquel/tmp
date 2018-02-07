CC=clang
# std=gnu99 : gnu99 = c99 + gnu extensions. Utilise ici pour avoir acces aux fonctions de temps reel avec une precision de nanoseconde (clock_gettime,...)
CFLAGS=-g -std=gnu99 -Wall -Wextra
# Le librairie necessaire pour utiliser clock_gettime est : librt
LDFLAGS=-lrt

speed: speed.c
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean :
	rm -f *.o speed
