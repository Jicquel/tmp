/*
    Enonce:

    L'objectif de cet exercice est de manipuler une liste simplement
    chainee de cellules contenant un entier. Une liste sera ici
    representee par un pointeur vers sa premiere cellule, la tete de
    liste.

    On fournit ici la structure de donnee representant une cellule, un
    programme de test (main) ainsi que les prototypes des fonctions a
    implementer, a savoir:

        a. L'insertion d'une valeur en tete de liste ;
        b. L'insertion d'une valeur en queue de liste ;
        c. La suppression d'une liste de la premiere occurrence d'une valeur
            donnee ;
        d. L'affichage des cellules d'une liste sur la sortie standard.

    Le comportement attendu pour chaque fonction a implementer est decrit
    en commentaires au dessus de chacune d'entre elles.

    Remarque : dans quel ordre ecrire ces fonctions?
    Il est important de compiler et tester au fur et a mesure que vous
    developpez, le plus tot possible (et surtout pas tout coder avant
    meme d'essayer de compiler. Echec quasi-garanti).
    Ici a. permet de construire une liste et d. de l'afficher. Avec ca,
    vous aurez rapidement un programme certes incomplet mais qui fonctionne!
    En plus vous reglerez d'eventuels de comprehension sur comment manipuler
    les structures en jeu, et les fonctions suivantes seront beaucoup
    plus simples a ecrire.
    (Cas contraire: imaginez que ayez ecrit tout le code avec un couac
    sur l'utilisation de la structure. Une fois le probleme resolu, vous
    devrez reprendre toutes les autres fonctions...)

    Competences : 20,81,82,83,88,89,91,92,94,96,99
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

/* Structure de donnees decrivant un element d'une liste. */
struct cellule
{
    /* La valeur d'une cellule est un entier. */
    uint32_t val;
    /* Pointeur vers la cellule suivant dans la liste. */
    struct cellule *suiv;
};

/*
    Affiche sur la sortie standard les valeurs des cellules de la liste
    pointee par l.
*/
static void afficher(struct cellule *l)
{
    /* A implementer! */
}

/*
    Cree une nouvelle cellule contenant la valeur v et l'insere en tete
    de la liste pointee par pl.
*/
static void inserer_tete(struct cellule **pl, uint32_t v)
{
    /* A implementer! */
}

/*
    Cree une nouvelle cellule contenant la valeur v et l'insere en queue
    de la liste pointee par pl.
*/
static void inserer_queue(struct cellule **pl, uint32_t v)
{
    /* A implementer! */
}

/*
    Supprime de la liste pointee par pl la premiere occurrence de cellule
    contenant la valeur v.
*/
static void supprimer_premiere_occurrence(struct cellule **pl, uint32_t v)
{
    /* A implementer! */
}

int main(void)
{
    struct cellule *liste = NULL;
    for (uint32_t i = 6; i < 10; i++) {
        inserer_queue(&liste, i);
        afficher(liste);
    }
    for (uint32_t i = 5; i > 0; i--) {
        inserer_tete(&liste, i);
        afficher(liste);
    }

    /*
        Initialisation du generateur de nombres aleatoires
        (necessaire pour que rand() retourne des valeurs differentes a chaque
        execution du programme).
    */
    srand(time(NULL));

    while (liste != NULL) {
        supprimer_premiere_occurrence(&liste, rand() % 10);
        afficher(liste);
    }
    return EXIT_SUCCESS;
}
