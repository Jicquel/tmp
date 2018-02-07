/*
    Enonce :

    Dans cet exercice, il n'y a rien a coder, juste a lire,
    compiler, executer, et comprendre l'execution de ce programme.

    Il illustre le comportement de la fonction de liberation de memoire
    dynamique (free).

    Toto a passe un examen, il a obtenu, etonnamment, la note de 0/20.
    Par un petit tour de passe-passe, il arrive a changer sa note pour
    obtenir 10/20. Comment a-t-il fait?

    Competences : 89,92,94
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    /*
        On stocke la note de toto dans un entier alloue
        dynamiquement.
    */
    uint8_t *zero = malloc(sizeof(uint8_t));

    /* Toto obtient la note de 0 a l'examen. */
    *zero = 0;

    /* On le chambre un peu... */
    printf("%u + %u = la tete a Toto!\n", *zero, *zero);


    /* On n'a plus besoin de zero, on le libere. */
    free(zero);

    /* Vient ensuite le calcul de la moyenne de la classe. */
    uint8_t *moyenne = malloc(sizeof(uint8_t));


    /* Une moyenne on ne peut plus originale! */
    *moyenne = 10;

    /* On l'annonce a tout le monde. */
    printf("Moyenne de la classe: %u/20.\n", *moyenne);

    /* Toto vient consulter sa note sur le tableau d'affichage... */
    printf("Pour memoire, Toto a obtenu la note de %u/20.\n", *zero);

    /* On n'a plus besoin de moyenne, on la libere. */
    free(moyenne);


    return EXIT_SUCCESS;
}
