/*
    Enonce :

    Dans cet exercice, vous allez manipuler des structures et vous
    confronter aux problematiques liees au typage des variables en C.

    On definit une structure rationnel contenant deux champs entiers,
    l'un representant son numerateur et l'autre son denominateur.

    On vous demande d'implementer trois fonctions :

        - valeur_rationnel qui retourne la valeur reelle de l'entier
        rationnel passe en parametre, obtenue en divisant son numerateur
        par son denominateur ;

        - somme_puis_convertit qui calcule la somme des rationnels passes en
        parametres dans un nouveau rationnel, puis retourne la valeur
        associee a ce nouveau rationnel ;

        - convertit_puis_somme qui calcule d'abord la valeur reelle de
        chacun des parametres puis en calcule la somme.

    Competences : 13,14,20,27,29
    Difficulte : 2
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/*
    On definit le type "struct rationnel" contenant deux champs:
    un numerateur et un denominateur.
*/
struct rationnel
{
    /* numerateur */
    uint32_t n;

    /* denominateur */
    uint32_t d;
};

/* Retourne la valeur reelle associee au rationnel r. */
static float valeur_rationnel(struct rationnel r)
{
    return ((float)(r.n) / (float)(r.d));
}

/*
    Effectue la somme des rationnels r1 et r2 dans un nouveau rationnel
    r, puis retourne la valeur reelle qui lui est associee.
*/
static float somme_puis_convertit(struct rationnel r1,
                                  struct rationnel r2)
{
    struct rationnel r = {r1.n*r2.d + r2.n*r1.d, r1.d*r2.d};
    return valeur_rationnel(r);
}

/*
    Retourne la somme des valeurs reelles associees aux rationnels r1
    et r2.
*/
static float convertit_puis_somme(struct rationnel r1,
                                  struct rationnel r2)
{
    float val1, val2;
    val1 = valeur_rationnel(r1);
    val2 = valeur_rationnel(r2);
    return val1 + val2;
}

int main(void)
{
    struct rationnel r1 = { 1, 7 };
    struct rationnel r2 = { 3, 4 };

    printf("%f est-il egal a %f?\n",
            somme_puis_convertit(r1, r2),
            convertit_puis_somme(r1, r2));

    return EXIT_SUCCESS;
}
