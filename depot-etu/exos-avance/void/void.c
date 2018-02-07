/*
  Enonce :

  Le langage C est souvent considere comme un langage de bas niveau,
  en particulier parce qu'il permet de manipuler directement la
  memoire a l'aide de pointeurs.

  Cet exercice illustre cet aspect bas niveau, en vous demandant
  d'implementer une fonction print_memory qui affiche sur la sortie
  standard le contenu de la memoire a partir d'une adresse donnee sous
  forme d'une suite de bits.

  On s'appuiera pour ce faire sur la fonction : 
  
  void print_byte(uint8_t byte); 
  
  qui affiche l'octet byte sous la forme d'une suite de bits, des
  poids forts aux poids faibles. Cette fonction est aussi a
  implementer, puisqu'elle a le bon gout de vous faire manipuler les
  operateurs bit-a-bit.

  La fonction :

  void print_memory(void *base, size_t s);

  utilisera print_byte pour afficher le contenu octet par octet de la
  memoire a partir de l'adresse base. Le nombre d'octets a afficher
  est represente par le parametre s.

  Competences : 28,34,38,90,100
  Difficulte : 5
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

static void print_byte(uint8_t byte)
{
}

static void print_memory(void *base, size_t size)
{
}


int main(void)
{
    uint8_t un = 1;
    print_memory(&un, sizeof(uint8_t));

    uint8_t tab[4] = { 255, 0, 255, 0 };
    print_memory(tab, 4 * sizeof(uint8_t));

    uint32_t foo = 123456;
    printf("%u = ", foo);
    print_memory(&foo, sizeof(uint32_t));
    printf("\n");

    return EXIT_SUCCESS;
}
