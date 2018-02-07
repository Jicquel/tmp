/* L'enonce de l'exercice se trouve dans le fichier test_tableau.c.  */
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "tableau.h"

void affiche(int32_t tab[], uint32_t taille)
{
    for(int i = 0; i < taille; i++){
        printf("tab[%d] : %d,   ", i, tab[i]);
    }
        printf("\n");
}

void init_interactive(int32_t tab[], uint32_t taille)
{
    for(int i = 0; i < taille; i++)
        scanf("%d", &tab[i]);
}

void init_aleatoire(int32_t tab[], uint32_t taille)
{
    for(int i = 0; i < taille; i++)
        tab[i] = rand();
}

void tri_insertion(int32_t tab[], uint32_t taille)
{
    int tmp;
   for(int indice_base = 0; indice_base < taille; indice_base++)
   {
       int val = tab[indice_base];
       for (int indice_actuel = 0; indice_actuel < indice_base; indice_actuel++)
       {
           if (tab[indice_actuel] > val)
           {
               tmp = tab[indice_actuel+1];
               tab[indice_actuel+1] = tab[indice_actuel];
               tab[indice_actuel] = val;
               val = tmp;
           }
       }
   }
}
