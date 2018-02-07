/*
    Enonce :

    Cet exercice vous fera travailler les boucles. Vous devez
    implementer un programme iteratif qui demande a l'utilisateur
    d'entrer une majuscule au clavier. Si l'utilisateur entre autre
    chose qu'une majuscule, le programme reitere sa demande jusqu'a
    obtenir une majuscule. Des que l'utilisateur entre une majuscule, le
    programme affiche cette majuscule et s'arrete.

    Vous pourrez utiliser la fonction isupper de la libc (man isupper
    pour plus d'informations sur cette fonction).

    On utilisera une boucle "do ... while" comme boucle principale du
    programme.

    Competences : 18,41,69
    Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    
    do{
        printf("Donne moi à manger : ");
        c = getchar();
    }while(!isupper(c));
    printf("%c", c);
    return EXIT_SUCCESS;
}
