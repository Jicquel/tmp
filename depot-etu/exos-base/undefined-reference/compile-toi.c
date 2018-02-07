/*
    Enonce :

    L'objectif de cet exercice est de compiler a la main
    (c'est-a-dire sans utiliser de Makefile) un programme C qui fait
    appel a une bibliotheque externe.

    Une fois cette prouesse accomplie, on vous demande aussi d'ecrire
    un Makefile qui automatise la generation de l'executable
    compile-toi.

    Attention, les deux solutions doivent etre abordees et comprises
    (compilation a la main + Makefile).

    Competences : 9,10,79
    Difficulte : 1
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("La racine carree de 427 est %g.\n", sqrt(427));
    return EXIT_SUCCESS;
}

