/*
    Enonce :

    Cet exercice vous fera manipuler les operateurs logiques.
    Son but est d'exprimer dans la valeur de retour de la fonction noel
    la condition d'un vrai Noël.
    Un vrai Noël, c'est un Noël avec un sapin habille de guirlandes et/ou
    de boules et ou personne ne pose de lapin.

    Competences : 15,33,64
    Difficulte : 1
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static bool noel(bool boule, bool guirlande, bool sapin, bool lapin)
{
    // A completer
}

int main(void)
{
    if ( noel(false,false,false,false)) goto Cestpasgagne;
    if ( noel(true ,false,false,false)) goto Cestpasgagne;
    if ( noel(false,true ,false,false)) goto Cestpasgagne;
    if ( noel(true ,true ,false,false)) goto Cestpasgagne;
    if ( noel(false,false,true ,false)) goto Cestpasgagne;
    if (!noel(true ,false,true ,false)) goto Cestpasgagne;
    if (!noel(false,true ,true ,false)) goto Cestpasgagne;
    if (!noel(true ,true ,true ,false)) goto Cestpasgagne;
    if ( noel(false,false,false,true )) goto Cestpasgagne;
    if ( noel(true ,false,false,true )) goto Cestpasgagne;
    if ( noel(false,true ,false,true )) goto Cestpasgagne;
    if ( noel(true ,true ,false,true )) goto Cestpasgagne;
    if ( noel(false,false,true ,true )) goto Cestpasgagne;
    if ( noel(true ,false,true ,true )) goto Cestpasgagne;
    if ( noel(false,true ,true ,true )) goto Cestpasgagne;
    if ( noel(true ,true ,true ,true )) goto Cestpasgagne;
    printf("Joyeux Noel\n");
    return EXIT_SUCCESS;
    /*
        Note : L'utilisation de goto en C est generalement a proscrire.
        Tracer des erreurs est une des rares exceptions a son usage.
    */

Cestpasgagne:
    printf("C'est pas gagne !\n");
    return EXIT_FAILURE;
}
