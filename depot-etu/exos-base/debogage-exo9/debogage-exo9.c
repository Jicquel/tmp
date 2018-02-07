/*
    Enonce :

    L'objectif est de deboguer ce programme apparemment tres simple.

    Compilez-le a l'aide du Makefile fourni.
    Executez-le en saisissant d'abord la valeur 0, puis 1 puis 2, puis 5.
    Observez les resultats et trouvez le(s) bug(s) a l'aide des methodes adaptees de debogage.
    Expliquez pourquoi 1 et 2 sont tout le temps affiches.
    Expliquez pourquoi 0 ne s'affiche jamais.

    Competences : 30,61,62,109
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char saisie[3];
    uint16_t value;
    printf("Je lis dans vos pensees.\nPensez a un chiffre entre 0 et 2.\nTapez le au clavier, je ne regarde pas !\n");
    fgets(saisie, 3, stdin);
    value = atoi(saisie);
    if (value == 0) {
        printf("Vous avez saisi la valeur 0\n");
    }
    if (value == 1) {
        printf("Vous avez saisi la valeur 1\n");
    }
    if (value == 2) {
        printf("Vous avez saisi la valeur 2\n");
    }
    return EXIT_SUCCESS;
}
