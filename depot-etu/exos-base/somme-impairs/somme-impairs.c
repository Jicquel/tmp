/*
    Enonce :

    L'objectif de cet exercice est de calculer la somme des 5000
    premiers entiers impairs strictement positifs. On utilisera un
    tableau pour stocker ces entiers, et on calculera ainsi la somme de
    ses elements. Vous devrez declarer une constante TAILLE_TAB
    representant la taille du tableau.

    On vous demande ici d'implementer deux fonctions dans ce meme
    fichier, en plus de la fonction main :

        void init_tab(uint32_t tab[], size_t length);

    qui initialise le tableau passe en parametre avec les valeurs des
    "length" premiers entiers impairs strictement positifs.

        uint32_t somme_tab(uint32_t tab[], size_t length);

    qui retourne la somme des elements du tableau "tab" passe en
    parametre.

    Le resultat sera affiche sur la sortie standard.

    Competences : 16,23,66,67,70,74
    Difficulte : 1
 */

#include <stdlib.h>
#include <stdint.h>

#define TAILLE_TAB 5000

void init_tab(uint32_t tab[], size_t length){
    uint32_t n = 1;
    for(size_t ind = 0; ind < length; ind++){
        tab[ind] = n;
        n+=2;
    }
}

uint32_t somme_tab(uint32_t tab[], size_t length){
    uint32_t n = 1;
    uint32_t res = 0;;
    for(size_t ind = 0; ind < length; ind++){
        res+=n;
        tab[ind] = n;
        n+=2;
    }
    return res;
}
int main(void)
{

    uint32_t tab[TAILLE_TAB];
    printf("%u", somme_tab(tab, TAILLE_TAB));


    return EXIT_SUCCESS;
}
