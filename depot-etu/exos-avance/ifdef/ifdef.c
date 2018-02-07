/*
  Enonce : 
  L'objectif de cet exercice est d'utiliser le procede de
  compilation conditionnelle d'un programme C. Ce programme se
  comportera differemment selon si vous definissez la macro V1 ou
  V2. Votre objectif est de compiler a la main ce programme de telle
  sorte qu'un message de felicitations apparaisse sur la sortie
  standard lors de son execution.

  Dans un second temps, etendez ce programme pour que le message
  "J'ai tout compris, en fait!" ne s'affiche que si la macro
  BIEN_COMPRIS a ete definie a une valeur superieure a 42.
  
  Competences : 4
  Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const char *blabla;

#ifdef V1
    blabla = "Felicitations, vous avez compile la version 1 de ce programme!\n";
#elif defined(V2)
    blabla = "Felicitations, vous avez compile la version 2 de ce programme!\n";
#else
    blabla = "Rate! Vous n'avez defini ni V1 ni V2 a la compilation.\n";
#endif

    printf("%s\n", blabla);
    printf("J'ai tout compris, en fait!\n");
    return EXIT_SUCCESS;
}
