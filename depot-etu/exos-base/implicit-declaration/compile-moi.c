/*
    Enonce :

    L'objectif de cet exercice est de compiler un programme C
    qui fait appel a une fonction definie en dehors du programme
    principal. Ce programme contient une erreur, qu'il faudra corriger
    pour que la commande 'make' produise un programme executable.

    Competences : 1,102
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char lettre = 'L';

    if (isupper(lettre)) {
        printf("La lettre %c est une majuscule.\n", lettre);
    } else {
        printf("La lettre %c est une minuscule.\n", lettre);
    }

    return EXIT_SUCCESS;
}
