/*
    Enonce :

    Il vous est demande d'implementer un programme qui prend un nombre entier
    strictement positif N en parametre et qui affiche la liste de ses
    diviseurs, differents de 1 ou de lui-meme, ou "N est premier!" si le nombre
    passe en parametre n'a pas d'autres diviseurs que 1 et lui-meme.

    Pas d'inquietude, il n'y a pas de maths complexes ici : on va
    simplement enumerer tous les entiers k de l'intervalle [2; N-1] et
    tester si le reste de la division de N par k est 0 ou non.

    Voici deux exemples de sortie de ce programme :

    ./diviseurs 13
    13 est premier!

    ./diviseurs 112
    2 est un diviseur de 112.
    4 est un diviseur de 112.
    7 est un diviseur de 112.
    8 est un diviseur de 112.
    14 est un diviseur de 112.
    16 est un diviseur de 112.
    28 est un diviseur de 112.
    56 est un diviseur de 112.

    Competences : 13,29,56,66
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
    /* Affiche un message d'erreur si l'utilisateur oublie l'argument
     * a passer en ligne de commandes. */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s nombre\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* Convertit l'argument passe par l'utilisateur en entier unsigned. */
    int32_t au_cas_ou = atoi(argv[1]);
    if (au_cas_ou < 1) {
        fprintf(stderr, " on a dit \"strictement positif\", le nombre! Pas %d...\n", au_cas_ou);
        exit(EXIT_FAILURE);
        /* Tiens et si ca tient pas sur 32 bits? A voir... */
    }
    uint32_t nombre = (uint32_t) au_cas_ou;


    return EXIT_SUCCESS;
}
