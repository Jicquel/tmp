/*
  Enonce : 
  Au menu de cet exercice: un mini profiler avec des constantes binaires et hexadecimales,
  des operateurs binaires

  Representation simplifiee du profil d'un individu :
  - 1 entier non signe sur 16 bits
  - chaque position binaire correspond a une qualite ou un defaut
  - profil_noms : tableau des noms de qualites/defauts
  - profil_masques : tableau en parallele des masques binaires correspondant a chaque qualite/defaut
  - par exemple :
        + la valeur binaire 1000000000000000 correspond a la qualite "Diplomate"
        + la valeur binaire 0000000000010000 correspond au defaut "Blessant"

  Directives de codage :
  - On appelera le programme de cette facon : ./profiler <valeur numerique du profil a tester en hexadecimal>
  
  Competences : 24,34
  Difficulte : 2
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 16     // taille des tableaux profils_masques et profils_noms

/*  Definir ici 2 constantes hexadecimales : CON ayant pour valeur ff00 et PERLE ayant pour valeur 00ff 
    CON represente ainsi un profil ayant tous les defauts et aucune qualite
    PERLE represente ainsi un profil ayant toutes les qualites et aucun defaut */

/*  
    Affiche les qualites et defauts de l'individu ayant ce profil passe en parametre
    Exemple d'affichage (la valeur du profil est a afficher en hexadecimal) :
    Voici les qualites et defauts de cet individu de profil (hexa) 1010 :
    Bienveillant Blessant
    Faire l'analyse simplifiee suivante du profil et afficher les messages correspondants :
    - Cas : tous les defauts et aucune qualite, afficher :
      Ouh la, attention, ce profil est celui d'un gros c... !
    - Cas : toutes les qualites et aucune defaut, afficher :
      Wouah, ce profil est celui d'une perle !
    - Cas : nombre de qualites superieur ou egal au nombre de defauts, afficher :
      Ce profil est plutot bon.
    - Cas : nombre de qualites inferieur au nombre de defauts, afficher :
      Ce profil est plutot mauvais.
*/
/* Completer les parametres passes a la fontion : un profil, le tableau des masques de profil, le tableau des noms de profil */
void affiche_profil(
)
{
    /* A completer : code de la fonction */
}

/*
    main
*/
int main(int argc, char **argv)
{
    /* Tableau des masques de profil */
    /* A completer : initialisation des valeurs de profil_masques avec des constantes binaires */
    const uint16_t profil_masques[SIZE] = {
    };

    /* Tableau des noms des elements de profil */
    const char *profil_noms[SIZE] = {
        "Diplomate", "Courageux", "Altruiste", "Bienveillant",
        "Empathique", "Honnete", "Loyal", "Gentil",
        "Intolerant", "Arrogant", "Abrupt", "Blessant",
        "Calculateur", "Cruel", "Hypocrite", "Indiscret"
    };
    
    /* Profil passe en parametre */
    uint16_t profil;
    /* A completer : remplir profil a partir des parametres d'appel du programme
       et appeler affiche_profil */
    /* Fin A completer */
    return EXIT_SUCCESS;
}

