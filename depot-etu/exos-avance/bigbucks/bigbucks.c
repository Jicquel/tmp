/*
  Enonce :

  La societe BigBucks prepare un plan social d'envergure.
  Afin de mieux cibler qui seront les victimes, elle entame la
  saisie informatique du profil de ses salaries.

  L'appat du gain vous oblige a implementer un prototype de
  module de gestion des salaries. Le cahier des charges de ce module
  est decrit dans le fichier salarie.h.

  En particulier, il vous incombe de definir une structure de donnees representant
  un salarie de l'entreprise, avec les contraintes suivantes :

  elle devra contenir, dans cet ordre :
  - son prenom sous la forme d'une chaine de caracteres de longueur max 16 ;
  - son nom sous la forme d'une chaine de caracteres de longueur max 32 ;
  - son age, sous la forme d'un entier non signe 8 bits ;
  - son anciennete dans l'entreprise, sous la forme d'un entier non-signe 8 bits ;
  - son salaire mensuel, sous la forme d'un entier non signe 32 bits.

  Le module que vous implementerez comprend aussi des fonctions d'allocation,
  initialisation et liberation d'un salarie.

  Competences : 20,28,83,88,89,90,91,92,94,96,98,100 
  Difficulte : 5
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "salarie.h"

void afficher_salarie(void *sal) {
    /*
        Version qui n'utilise pas votre definition de struct salarie,
        mais s'appuie sur le cahier des charges, en allant lire directement
        en memoire depuis l'adresse de base de l'objet "sal" passe en parametre.
    */

    /*
        En premiere position dans la structure, on doit retrouver
        une chaine de caracteres de longueur 16.
    */
    const char *prenom = sal;

    /*
        Le nom vient en 2e position dans la structure, il doit donc
        se trouver 16 octets apres l'adresse de base.
    */
    const char *nom = sal + 16;

    /*
        Ensuite vient l'age, qui se trouve apres le prenom (16 octets)
        et le nom (32 octets). L'age est code sur 1 octet.
    */
    uint8_t age = *(uint8_t *)(sal + 16 + 32);

    /*
        Ensuite vient l'anciennete, qui se trouve apres le prenom (16 octets),
        le nom (32 octets) et l'age (1 octet). L'anciennete est codee sur 1 octet.
    */
    uint8_t anciennete = *(uint8_t *)(sal + 16 + 32 + 1);

    /*
        Enfin vient le salaire, qui se trouve apres le prenom (16 octets),
        le nom (32 octets), l'age (1 octet) et l'anciennete (1 octet).

        Attention, chaud cacao : on avance de deux octets supplementaires,
        parce qu'un mot de 4 octets commence toujours a une adresse
        multiple de 4 octets. Voir le commentaire de la fonction allouer_salarie()
        dans la correction pour plus de details.

        Le salaire est code sur 4 octets.
    */
    uint32_t salaire = *(uint32_t *)(sal + 16 + 32 + 1 + 1 + 2);

    printf("%s %s a %u ans.\n", prenom, nom, age);
    printf("Il est dans l'entreprise depuis %u annees et gagne %u euros par mois.\n",
           anciennete, salaire);
}

int main(void)
{
    struct salarie *s1, *s2;

    /*
        On cree le premier salarie. Il est dans l'entreprise depuis
        longtemps, son salaire est mirobolant!

        Ici on separe l'allocation de l'initialisation de la structure.
    */
    s1 = allouer_salarie();
    init_salarie(s1, "Donald", "Trump", 70, 70, -1);
    afficher_salarie(s1);

    /*
        Un deuxieme salarie, plus modeste.

        Ici, on utilise creer_salarie() qui effectue l'allocation
        ET l'initialisation du salarie.
    */
    creer_salarie(&s2, "John", "Doe", 34, 10, 2500);
    afficher_salarie(s2);

    /* On met la cle sous la porte, tout le monde passe a la trappe! */
    plan_social(&s1);
    plan_social(&s2);

    return EXIT_SUCCESS;
}
