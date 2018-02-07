/*
    Enonce :

    Chez les papous,
    y'a des papous papa a poux
    y'a des papous papa pas a poux
    y'a des papous pas papa a poux
    y'a des papous pas papa pas a poux

    Et chez les pas papous, y'a une fonction afficher_papous qu'il faut
    implementer en utilisant des conditionnelles et des operateurs
    logiques.

    Competences : 33,63,64
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static void afficher_papous(bool est_papa, bool a_poux)
{
}

int main(void)
{
    printf("Chez les papous...\n");
    afficher_papous(true, true);
    afficher_papous(true, false);
    afficher_papous(false, true);
    afficher_papous(false, false);

    return EXIT_SUCCESS;
}
