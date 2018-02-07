/*
    Enonce :

    Voici un programme qui demande a l'utilisateur de saisir deux
    entiers naturels au clavier representant des coordonnees dans le
    plan. En sortie, le programme affiche la distance entre le point
    saisi et l'origine (0,0) du plan.

    Seul hic, ce programme ne compile pas. Il y a en fait deux problemes
    a regler pour qu'il compile correctement :

        1- clang -std=c99 -Wall -Wextra -g   -c -o portee.o portee.c
           portee.c:33:17: warning: implicit declaration of function 'distance_origine' is invalid in C99 [-Wimplicit-function-declaration]
           double d = distance_origine(p);
                ^

        2- clang -lm  portee.o point.o   -o portee
           duplicate symbol _afficher in:
           portee.o
           point.o

    Le Makefile fourni est correct, c'est le code C de ce programme
    qu'il faudra modifier pour faire disparaitre ces messages d'erreur.
    En revanche, il est interdit ici (sinon, c'est pas drole), de
    renommer les fonctions fournies.

    Competences : 1,78
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>

#include "point.h"

void afficher(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        printf("argument %i: %s\n", i, argv[i]);
    }
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s coordX coordY\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* Affichage pour du debug... */
    afficher(argc, argv);

    struct point p;
    p.x = atoi(argv[1]);
    p.y = atoi(argv[2]);

    double d = distance_origine(p);
    printf("Distance de ce point a l'origine: %lf.\n", d);

    return EXIT_SUCCESS;
}
