/*
    Enonce :

    Cet exercice illustre une des differences entre l'ecriture avec
    fprintf sur la sortie standard ou la sortie d'erreurs.
    Exo facile en termes de programmation, il n'y a rien a faire!
    Par contre il faut constater/comprendre ce qui se passe;
    qu'en retirer?

    Competences : 56,57
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(void)
{
    uint32_t n = 500;

    for (uint32_t i = 0; i < n; i++) {
        fprintf(stdout, "ping %d ", i);
        fprintf(stderr, "pong %d\n", i);
    }

    return EXIT_SUCCESS;
}
