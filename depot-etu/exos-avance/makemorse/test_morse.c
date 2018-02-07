/*
  Enonce :

  L'objectif n'est pas ici d'ecrire un code source C mais un Makefile
  permettant de creer et manipuler des librairies statique et
  dynamique.

  4 fichiers sont fournis :

  - morse.o : il s'agit d'un code objet d'un module permettant de
    convertir du texte en code Morse et inversement (le code source de
    ce module n'est pas fourni). Les librairies demandees sont a creer
    a partir de ce code objet ;

  - morse.h : entete du module morse.o ;

  - test_morse.c : programme de test des libraries du module Morse que
    vous allez creer ;
  
  - Makefile : version minimale a completer.

  Completez le Makefile fourni pour atteindre les objectifs demandes
  (et detailles dans ce meme Makefile).
  
  Competences : 11,12,80
  Difficulte : 3
*/

#include <stdio.h>
#include <stdlib.h>
#include "morse.h"

/* main */
int main()
{
    help(); // Affiche la correspondance des caracteres pris en charge et des codes Morse
    printf("Affichage du code Morse de la phrase : \"RMS Titanic SOS\"\n");
    affiche_morse("RMS Titanic SOS");
    printf("Affichage de la traduction du code Morse : \".-. -- ... // - .. - .- -. .. -.-. // ... --- ... // .---- ..... // .- ...- .-. .. .-.. // .---- ---. .---- ..---\"\n");
    affiche_texte(".-. -- ... //  - .. - .- -. .. -.-. // ... --- ... // .---- ..... // .- ...- .-. .. .-.. // .---- ---. .---- ..---");
    
    return EXIT_SUCCESS;
}
