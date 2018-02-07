CC = clang
LD = clang

CFLAGS=-std=c99 -Wall -Wextra -g
LDFLAGS=

# Enonce : completer ce Makefile avec les objectifs suivants
# Objectifs du Makefile :
# Generer la librairie statique libmorseLS.a a partir du code objet morse.o fourni
# Generer la librairie dynamique libmorseLD.so a partir du code objet morse.o fourni
# Generer le programme test_morse_LS a partir du code source test_morse.c fourni et de la librairie statique creee libmorseLS.a
# Generer le programme test_morse_LD a partir du code source test_morse.c fourni et de la librairie dynamique creee libmorseLD.so
# NOTA BENE :
#     * Ne pas generer directement test_morse_LS ou test_morse_LD a partir de test_morse.o et morse.o.
#     * L'objectif de l'exercice est de generer des librairies statique (libmorseLS.a) et dynamique (libmorseLD.so)
#       et de les utiliser pour creer les programmes test_morse_LS test_morse_LD
# Regles phony/clean
.PHONY  : clean 

clean:
	rm -rf test_morse.o test_morse_LS test_morse_LD libmorseLS.a libmorseLD.so

