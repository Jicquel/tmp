/*
  Enonce : 

  Il arrive parfois qu'un programme ou une bibliotheque ait des
  besoins specifiques en terme d'allocation memoire. Par exemple,
  certains d'entre eux effectuent un grand nombre
  d'allocations/desallocations d'objets de meme taille. malloc et free
  sont des appels systeme. On ne decrira pas ici ce que ca veut dire
  (vous verrez ca en 2A), retenez simplement qu'appeler malloc n'est
  pas gratuit. 

  On se propose ici d'implementer un allocateur qui met en place un
  mecanisme de reutilisation de zones memoire allouees dont la taille
  est une puissance de 2 inferieure a 2^(MAX-1) (voir "slab
  allocation" sur wikipedia si vous etes curieux. Si vous etes
  curieuse, ca marche aussi).
  
  En pratique, notre allocateur manipule une table indexee par les
  puissances de 2 allouables, de 0 a MAX - 1. Pour tout indice k
  compris entre 0 et MAX - 1, table[k] represente une liste chainee de
  zones memoire disponibles de taille 2^k. Si aucune zone memoire de
  taille 2^k est disponible, alors table[k] vaut NULL.

  La fonction d'allocation memoire cherche dans cette table une zone
  memoire disponible de taille souhaitee. Si elle n'en trouve pas,
  elle effectue une "vraie" allocation avec malloc.

  La fonction de liberation memoire n'appelle pas free : elle va
  simplement chainer la zone memoire correspondante avec les autres
  zones memoire de meme taille 2^k disponibles, auxquelles on accede
  depuis l'entree table[k] de la table des allocations.

  Des fonctions de creation/destruction de cette table sont aussi a
  implementer. En pratique, la destruction de la table implique aussi
  la liberation de toutes les zones memoires qu'elle contient.

  Le comportement attendu de chaque fonction est decrit en commentaire
  de chacune d'elle.

  Competences : 20,83,85,87,88,89,93,94,97,98,99,100
  Difficulte : 5
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define MAX 12 /* taille max d'une allocation = 2^11 = 2048. */

/* Structure de donnees representant une zone memoire. */
struct data{
    /* L'adresse du debut de la zone memoire. */
    void *base;

    /* Sa taille, en octets. */
    size_t size;

    /* L'adresse de la prochaine zone memoire disponible de meme
     * taille (liste simplement chainee). */
    struct data *next;
};


/* Alloue et initialise a zero la table passee en parametre. La taille
 * de cette table est definie par la constante preprocesseur MAX. */
static void create_table(struct data ***table)
{
}

/* Libere la table passee en parametre, de taille MAX. Pour chacune
 * des entrees de la table, libere aussi les zones memoires
 * disponibles, si elles existent. */
static void destroy_table(struct data **table)
{
}

/* 
   Alloue une nouvelle zone memoire de taille size. 
   Si il existe une zone memoire disponible de taille size dans la table, on l'utilise.
   Sinon, on effectue une "vraie" allocation, via l'appel systeme malloc.

   Cett fonction arrete le programme de maniere brutale (assert) si la
   taille passee en parametre n'est pas une puissance de 2, ou depasse MAX.
 */
static struct data *allocate(struct data **table, size_t size)
{
    struct data *ret = NULL;
    return ret;
}

/* 
   Libere la zone memoire d passee en parametre.  Cette fonction
   n'appelle pas free : la zone memoire liberee est chainee aux autres
   zones memoires de meme taille de la table.
 */
static void deallocate(struct data **table, struct data *d)
{
}

static void test(void)
{
    struct data **table = NULL;
    printf("On cree la table des zones memoire.\n");
    create_table(&table);

    struct data *data1 = allocate(table, 128);
    void *data1_addr = data1->base;
    printf("Nouvelle zone memoire de taille 128 allouee a l'adresse %p.\n", data1_addr);

    deallocate(table, data1);
    printf("La zone memoire %p a ete liberee, elle est donc disponible pour une allocation future.\n",
            data1_addr);

    struct data *data2 = allocate(table, 128);
    void *data2_addr = data2->base;
    printf("Nouvelle zone memoire de taille 128 allouee a l'adresse %p.\n", data2_addr);
    if (data1_addr == data2_addr) {
        printf("Super! On a bien reutilise la zone memoire liberee precedemment!\n");
    } else {
        printf("Argh... On aurait du reutiliser de la memoire, et on a fait malloc a la place!\n");
    }

    struct data *data3 = allocate(table, 128);
    printf("Nouvelle zone memoire de taille 128 allouee a l'adresse %p.\n", data3->base);

    deallocate(table, data2);
    printf("La zone memoire %p a ete liberee, elle est donc disponible pour une allocation future.\n",
            data2->base);

    deallocate(table, data3);
    printf("La zone memoire %p a ete liberee, elle est donc disponible pour une allocation future.\n",
            data3->base);

    printf("On detruit la table des zones memoire.\n");
    destroy_table(table);
}


int main(void)
{
    /* Vous pourrez appeler la fonction test() qui teste le bon
     * fonctionnement de l'allocateur, des que vous aurez implemente
     * l'exercice. */
    return EXIT_SUCCESS;
}
