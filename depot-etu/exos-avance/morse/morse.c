/*
  Enonce :

  Cet exercice vous fera manipuler les notions de constantes, de
  portee de variables ainsi que des fonctions avancees de traitement
  de chaines de caracteres.

  Attention : cet exercice comporte des notions de base et des notions
  avancees.
  
  La liste des caracteres a prendre en compte est la suivante :
  - l'ensemble des lettres minuscules de a a z compris ;
  - l'ensemble des chiffres de 0 a 9 compris ;
  - le caractere espace ' '.

  La liste des codes Morse correspondants aux caracteres, les lettres
  dans l'ordre puis les chiffres dans l'ordre et enfin le caractere
  espace, est la suivante :


  ".-","-...","-.-.","-..",".","..-.","--.","....","..",
  ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
  "...","-","..-","...-",".--","-..-","-.--","--..",".----",
  "..---","...--","....-",".....","-....","--...","---..","---.",
  "-----","//"

  
  Directives de codage :

  - Completez le fichier entete morse.h

  - La liste des caracteres sera stockee dans une constante globale
  texte_ref de type tableau de caracteres a une dimension, vous ferez
  en sorte que cette constante globale ne soit visible que dans
  morse.c ;

  - La liste des codes Morse sera stockee dans une constante globale
  morse_ref de type tableau de chaines de caracteres a 2 dimensions,
  vous ferez en sorte que cette constante globale ne soit visible que
  dans morse.c ;

  - Les fonctions avancees de traitement de chaines de caracteres
    pourront etre utilisees (longueur, copie, comparaison,...) ;

  - Les constantes globales tableaux texte_ref et morse_ref seront
    initialisees lors de leur declaration ;

  - La fonction avancee strtok pourra aussi etre utilisee dans
    affiche_texte pour decouper la chaine en Morse en sous chaines ;

  - La fonction affiche_morse pourra prendre en compte des caracteres
    majuscule ou minuscule ;

  - Un fichier test_morse.c est fourni pour illustrer le
    fonctionnement desire des fonctions de morse.c ;
  
  Competences : 19,23,43,44,45,66,72,73,74,77,79
  Difficulte : 3
*/


/* help : fonction affichant tout le tableau du code morse pouvant
   etre code ou decode par ce programme*/
void help()
{
}

/* affiche_texte : fonction affichant le texte correspondant au code morse passe en parametre */
void affiche_texte(char *morse)
{
}

/* affiche_morse : fonction affichant le code Morse correspondant au texte passe en parametre */
void affiche_morse(char *texte)
{
}

