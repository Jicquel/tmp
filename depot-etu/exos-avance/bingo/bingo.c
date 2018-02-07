/*
  Enonce : 
  Au menu de cet exercice: des boucles, un soupcon
  d'allocation dynamique et un poil de generation de nombres
  aleatoires.

  Dans un premier temps, il vous est demande d'implementer la fonction:
  uint32_t *generer_tab_aleatoire(uint32_t val_max);

  qui alloue et initialise un tableau de val_max entiers naturels
  strictement positifs. Ce tableau contiendra la suite des entiers de
  1 a val_max ranges de maniere aleatoire. On portera une attention
  particuliere aux valeurs de retours des fonctions de la libc
  utilisees.

  Ensuite, il va falloir implementer un programme qui affiche la
  position dans le tableau de l'element de valeur 42. Vous ferez en
  sorte d'executer le moins de tours de boucle possibles.

  Competences : 56,62,66,68,92,111
  Difficulte : 1
*/

#include <stdlib.h>
#include <stdint.h>

/* Alloue et initialise un tableau contenant la suite des entiers
 * naturels strictement positifs de l'intervalle [1; val_max] ranges a
 * des positions aleatoires. */
static uint32_t *generer_tab_aleatoire(uint32_t val_max)
{
    uint32_t *tab = NULL;

    return tab;
}

int main(void)
{
    uint32_t val = 42;
    uint32_t *tab = generer_tab_aleatoire(512);

    /* A completer */
    /* Consigne: cette ligne doit rester la derniere du programme. */
    free(tab);

    return EXIT_SUCCESS;
}
