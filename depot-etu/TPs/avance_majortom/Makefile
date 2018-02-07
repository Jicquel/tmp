CC=clang
# Completer CFLAGS en incluant les PATH vers les fichiers entete .h de la lib SDL
# Les PATH vers ces fichiers sur les PC Ensimag physiques et virtuels sont : /usr/local/include , /usr/local/include/SDL , /usr/include/SDL
# Si vous travaillez sur votre ordinateur personnel, adaptez ces PATH a votre installation locale de SDL 1.2 et SDL_sound, 
CFLAGS=-g -std=c99 -Wall -Wextra 
# Completer LDFLAGS en incluant les librairies SDL, SDL_sound et libm (math.h)
# Le PATH vers ces librairies sur les PC Ensimag est : /usr/local/lib
# Les librairies necessaires sont : libSDL, libSDL_sound et libm
LDFLAGS=

# Ecrire un Makefile standard permettant de generer le programme test-sdlsound a partir de test-sdlsound.c, fonctions.c et sdlsound.o
# Faire en sorte que la compilation s'effectue aussi a nouveau quand un fichier .h est modifie
# Pour la regle clean, attention de ne pas supprimer l'objet fourni sdlsound.o
