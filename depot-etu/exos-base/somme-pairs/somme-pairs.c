/*
Enonce :

L'objectif de cet exercice est de calculer la somme des 10 premiers entiers
pairs positifs (0 compris). On utilisera un tableau pour stocker ces
entiers, et on calculera ainsi la somme de ses elements.  Le resultat sera
affiche sur la sortie standard.

Competences : 16,66,67
Difficulte : 1
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int res = 0;
    for(int i = 0 ; i <= 10 ;  i++){
        res += i;
    }
    printf("%i", res);
    return EXIT_SUCCESS;
}
