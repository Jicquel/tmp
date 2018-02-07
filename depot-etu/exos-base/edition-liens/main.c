/*
    Enonce :

    L'objectif de cet exercice est de compiler a la main (sans
    Makefile) un programme C compose de plusieurs modules: le programme
    principal, 'main', appelle une fonction dont l'implementation est
    donnee dans un fichier separe ('mon_super_module.c').

    Competences : 7,8,9,71
    Difficulte : 1
*/

#include <stdlib.h>

#include "mon_super_module.h"


int main(void)
{
    mon_super_message_de_reussite();
    return EXIT_SUCCESS;
}
