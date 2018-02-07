/*
  Enonce : 
  Au menu de cet exercice: lecture par ligne dans un fichier,
  des entrees formattees depuis une chaine, des ecritures et
  lectures dans un fichier binaire, les parametres argc, argv.

  Luke Skywalker a disparu mais pas que lui. D'autres Jedi sont
  aussi caches dans la galaxie. Heureusement, r2d2 a conserve 
  un fichier (r2.txt) contenant les fiches de ces Jedi.
  
  Votre mission, si vous l'acceptez, est de convertir ce fichier en
  binaire afin de le proteger a minima et de permettre un acces direct
  aux fiches. En effet, l'identifiant isj de la fiche Jedi sera sa position
  dans le fichier binaire genere.
  
  Votre mission est aussi de fournir une fonction de recherche d'une fiche Jedi
  dans ce fichier binaire, a partir de l'Identifiant Spatial Jedi (isj).
  
  En cas de probleme, le departement d'etat niera toute implication
  dans l'operation.

  Competences : 47,48,49,53,54,59,60,85,114
  Difficulte : 4
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define SIZE 20     // taille maximale d'un champ de caracteres : nom, prenom, planete

/* Structure d'une fiche de donnees Jedi */
struct jedi {
    uint32_t    isj;		    // Identifiant Spatial Jedi : identifiant unique, c'est l'INE des Jedi
    char        nom[SIZE];
    char        prenom[SIZE];
    uint16_t    age;
    float       taille;
    char        planete[SIZE];
};

/*  
    Affiche tous les champs de la fiche Jedi passee en parametre 
    Fonction utilisee par print_isj
*/
void print_jedi(struct jedi *jedi)
{
    /* A completer */
}

/*
    Recherche et lit une fiche Jedi dans le fichier binaire bin
    en y accedant directement par la cle identifiant isj et affiche
    tous les champs de la fiche trouvee (appel a la fonction print_jedi).
    Retourne 1 en cas de probleme, 0 sinon.
    
    bin : nom du fichier binaire
    isj : Identifiant Spatial Jedi recherche
*/
int16_t print_isj(char *bin, uint32_t isj)
{
    /* A completer */
}

/*
    Lit dans le fichier texte (in) toutes les fiches Jedi et les ecrit
    dans un fichier binaire. L'identifiant isj fera office de cle d'acces
    direct dans le fichier binaire de sortie (out)
    Retourne 1 en cas de probleme, 0 sinon.
    
    in  : nom du fichier entree texte (ex : r2.txt)
    out : nom du fichier sortie binaire (ex : d2.bin)
    
    NOTA BENE : 
    
    Lecture texte :
    On utilisera une variable intermediaire de type struct jedi
    pour stocker les valeurs lues dans le fichier d'entree.
    La lecture caractere par caractere ne sera pas utilisee.
    La lecture des fiches du fichier d'entree texte doit s'effectuer
    obligatoirement en utilisant les fonctions parmi : fgets, sscanf, fscanf
    Solution 1 : fgets + sscanf. Solution 2 : fscanf
    Coder les 2 solutions
    Quand les 2 solutions marcheront bien, amusez vous a supprimer le code isj d'une
    des lignes du fichier r2.txt
    Puis reessayez solution 1 et solution 2. Que constatez vous ?

    
    Ecriture binaire : on ecrira directement la variable de type struct jedi a
    l'emplacement jedi.isj du fichier binaire
*/
int16_t convert_to_bin(char *in, char *out)
{
    struct jedi jedi;
    /* A completer */
}

/*
    main : a ecrire completement
    3 parametres sont passes au programme (cf. argc, argv):
    - nom fichier texte entree
    - nom fichier binaire sortie
    - identifiant isj recherche
    Exemple d'utilisation :
    ./jedi r2.txt d2.bin 1977
    main effectue les traitements suivants :
    - verifier que les 3 parametres attendus sont bien presents, les recuperer
    - appeler convert_to_bin avec les parametres adequates
    - appeler print_isj avec les parametres adequates
*/
