/*
  Enonce :
  Ici, il est question des flux de sortie, d'erreur, d'entree
  et de la lecture et ecriture sur ces flux
  
  Ce que doit faire votre programme main :
  
  Dans un premier temps :
  - Utilisation des flux standards de sortie (ecran), d'erreur (ecran) et d'entree (clavier)
  - Afficher le message suivant sur la sortie standard :
  Bienvenue chez les flux
  Saississez des couples nom age (ex : doe 35)
  sur une meme ligne en validant par un retour chariot
  Tapez Q pour quitter le programme
  - Saisie securisee d'une ligne contenant un nom (a stocker dans la variable nom) et un age (a stocker dans la variable age)
  - Si le caractere Q a ete saisi en debut de ligne : arreter la lecture et terminer le programme
  - S'il manque un element attendu dans la ligne saisie (nom et/ou age) :
        + afficher le message suivant (exemple) sur la sortie d'erreur et passer a la lecture suivante :
          Erreur de saisie, nom et/ou age manquant dans la chaine : doe
        + afficher sur la sortie standard le message :
          ####
  - Si les 2 elements attendus sont presents (nom et age) :
        + afficher sur la sortie standard le message suivant (exemple) :
          nom = Connor - age = 19 ans

  Directives de codage obligatoires :
  Saisies : utiliser imperativement et uniquement la saisie securisee fgets + sscanf
  Affichages : utiliser imperativement et uniquement les fonctons fprintf et fputs

  Dans un deuxieme temps (quand le premier temps est realise et ok) :
  - Ne modifiez aucune ligne du code precedemment ecrit
  - Ajouter du code dans main pour effectuer les traitements suivants :
        + Rediriger le flux d'entree standard sur un fichier in.txt
        + Rediriger le flux de sortie standard vers un fichier out.txt
        + Rediriger le flux de sortie d'erreur vers un fichier err.txt
  - Changer la valeur #define REFLUX et la mettre a true et executer le code rajoute ci-dessus quand REFLUX a pour valeur true
  
  Verifier le contenu des fichiers out.txt et err.txt apres execution de ce nouveau code

  Competences : 54,55,56,57
  Difficulte : 2
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#define TAMPSIZE 100    // Taille maximale de la chaine tampon de saisie securisee : 100 caracteres
#define REFLUX false    // true si on veut rediriger les flux stdin, stdout et stderr vers des fichiers, false sinon

int main(void)
{
    char nom[20];   // Variable de stockage du nom saisi
    uint16_t age;   // Variable de stockage de l'age saisi
    /* A completer */
    return EXIT_SUCCESS;
}

