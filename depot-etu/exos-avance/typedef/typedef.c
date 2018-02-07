/*
  Enonce : 

  Cet exercice illustre la definition de types en C. Il n'y a rien a
  code, juste a lire, comprendre et retenir ce qui vous est presente
  ici.

  Competences : 25
  Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>	
#include <stdbool.h>
#include <time.h>

/* 
   En C, definir un type revient a renommer un type existant. Il n'y a
   donc rien de fondamentalement complique, vous pouvez voir ce
   mecanisme comme un moyen d'attribuer des noms explicites a des
   types de donnees que votre programme manipule souvent. 

   Voici les cas ou on s'autorise a utiliser typedef : 

   1- pour redefinir un type de base (pour lui donner un nom
   explicite, indiquer que ce type de base represente en fait une
   donnee particuliere de notre programme) ;

   2- pour redefinir un type de base ;

   3- pour redefinir un type de base ;

   4- goto 1-.

   Dans TOUS les autres cas, utiliser typedef n'est JAMAIS une bonne
   idee.

   Voici quelques illustrations d'utilisation de typedef, a bon ou
   mauvais escient :
*/

/*
  [BIEN] On definit le type grey_scale_t, qui represente un niveau de
  gris sur un pixel. La valeur 0 represente le noir, la valeur 255 le
  blanc, tout valeur intermediaire represente du gris (plus ou moins
  clair). Ici, l'utilisation de typedef est appropriee : on donne une
  information supplementaire a la personne qui lit le code. Quand on
  declare une variable de type grey_scale_t, elle sait qu'on y
  stockera un niveau de gris. Notez que rien ne change du point de vue
  de la compilation ou de l'execution, on continue de manipuler des
  entiers non-signes codes sur 1 octet.
 */
typedef uint8_t grey_scale_t;

/*
  [PAS BIEN] On definit le type point_t, qui represente une
  structure. C'est mal. Des gens vous diront que c'est bien, d'autres
  que ce n'est pas si grave, que c'est tolere (meme des profs de C,
  des fois!). Le verdict officiel est : c'est mal. Le mot-cle struct
  donne une information importante sur les variables de type struct
  point : elles contiennent d'autres variables! (les champs de la
  structure). On perd donc de l'information avec ce renommage. En
  plus, l'argument "je donne un nom de type explicite" ne tient plus
  la route, puisque vous pouvez tres bien le faire en donnant a votre
  structure un nom explicite! Reste l'argument de la concision du
  code, qui ne doit jamais prevaloir sur sa lisibilite ou sa clarte.
 */
struct point
{
     uint8_t pos_x;
     uint8_t pos_y;
};

typedef struct point point_t;

/*
  [PASSIBLE D'EMPRISONNEMENT] C'est vraiment la pire utilisation du
  typedef (de loin). Ici, on renomme le type double ** en
  matrice_t. Par ce renommage, on cache a l'utilisateur qu'un objet de
  type matrice_t est en fait un pointeur de pointeur, avec tout ce que
  ca implique sur son initialisation, son allocation memoire, son
  utilisation (operateur *, etc.).

  Il existe bien des exceptions a cette regle qui impliquent un style
  de programmation bien particulier que l'on abordera pas ici (si on
  interdit a l'utilisateur de manipuler directement les variables de
  type matrice_t, c'est-a-dire qu'on ne peut les manipuler que via des
  appels de fonctions).

  Retenez donc que cette pratique est proscrite, et que tout
  contrevenant sera enferme dans le cachot sous l'amphi D avec pour
  seule lecture le poly de C et le coding style Linux, jusqu'a ce
  qu'il admette ses fautes.
*/
typedef double ** matrice_t;
