/*
    Enonce :

    Cet exercice vous met, l'espace d'un instant, dans la peau de Paul
    le poulpe (https://fr.wikipedia.org/wiki/Paul_le_poulpe).

    L'objectif est de pronostiquer les resultats du groupe A de
    l'EURO2016 de foot (si vous n'en n'avez pas encore entendu parler,
    c'est trop tard c'est deja fini! Ben ouais, on recycle les exos des annees
    precedentes...).

    Votre programme devra afficher les resultats du groupe A sous la
    forme :

    Equipes	    V	D	N	bp	pc	diff  pts
    Albanie	    1	1	1	2	4	-2    4
    France 	    3	0	0	11	2	9	  9
    Roumanie	1	2	0	5	5	0	  3
    Suisse 	    0	2	1	1	8	-7    1

    Il vous est demande de proceder de la maniere suivante :

    1- definir une structure de donnees struct equipe qui represente une
        equipe nationale, comprenant:
            - son nom ;
            - son nombre de victoires dans la phase de groupe (V) ;
            - son nombre de defaites dans la phase de groupe (D) ;
            - son nombre de matchs nuls (N) ;
            - son nombre de buts marques dans la phase de groupe (bp) ;
            - son nombre de buts encaisses dans la phase de groupe (pc) ;
            - la difference entre les buts marques et les buts encaisses par cette
            equipe (diff) ;
            - le nombre de points de cette equipe (pts).

        Le nombre de points est calcule de la maniere suivante :
            - 3 points pour une victoire ;
            - 1 point pour un match nul ;
            - 0 point pour une defaite.

    2- definir le groupe A comme etant un tableau a 4 entrees, dont
        chaque entree est une equipe (struct equipe).

    La fonction main de votre programme devra declarer le tableau
    groupeA, l'initialiser de maniere a ce qu'il represente les vraies
    equipes de l'EURO (Albanie, France, Roumanie, Suisse), simuler le
    resultat de chaque match et enfin afficher le tableau du groupe sous
    la forme de ce qui est presente plus haut.

    Les equipes ne se rencontrent qu'une fois chacune. La simulation du
    resultat d'un match sera implementee dans la fonction :

        void jouer_match(struct equipe *e1, struct equipe *e2);

    On utilisera un generateur de nombre aleatoire (fonction rand())
    pour simuler le nombre de buts marques par chaque equipe dans un
    match. On se ramenera a l'intervalle [0;5] pour etre plus realiste.
    En fonction du nombre de buts marques par chacune des deux equipes,
    on pourra facilement mettre a jour les differents champs des
    structures equipe e1 et e2.

    Enfin, la fonction :

        void affiche_equipe(struct equipe *e);

    affiche l'equipe passee en parametre. Cet affichage correspond a
    l'affichage d'une ligne du groupe, par exemple :

        France 	3	0	0	11	2	9	9

    Competences : 20,36,63,75,88,96
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

struct equipe;


static void jouer_match(struct equipe *e1, struct equipe *e2)
{
}

static void afficher_equipe(struct equipe *e)
{
}

int main(void)
{
    /* Initialisation du generateur de nombres aleatoires, utilise
     * dans jouer_match(). */
    srand(time(NULL));


    return EXIT_SUCCESS;
}
