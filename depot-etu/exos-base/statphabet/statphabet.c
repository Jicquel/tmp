/*
    Enonce :

    Cet exercice va vous donner l'occasion d'analyser la prose de poetes francais
    parmi les plus talentueux de notre ere (ici, Annie Cordy et Carlos Dolto).

    On vous demande d'ecrire un programme qui prend un fichier texte en argument
    de la ligne de commandes, l'analyse et affiche en sortie le nombre de fois
    qu'apparaissent chacune des lettres de l'alphabet dans ladite oeuvre.

    Par exemple, ./statphabet tatayoyo.txt doit afficher un rapport de la forme :

    a: 110
    b: 12
    c: 13
    d: 43
    e: 89
    f: 10
    g: 26
    h: 7
    i: 56
    j: 10
    k: 0
    l: 32
    m: 57
    n: 64
    o: 70
    p: 13
    q: 16
    r: 23
    s: 61
    t: 61
    u: 55
    v: 3
    w: 0
    x: 7
    y: 27
    z: 0
    caracteres speciaux: 326

    Vous noterez que tata yoyo ne contient aucune occurrence du caractere 'k', au
    contraire du titre "cho ka ka o" qui fait monter ce compteur en fleche grace
    au fameux "ki ki ki le petit kiwi".

    Votre analyse ne doit pas etre sensible a la case : on comptera indifferemment
    'a' et 'A' comme etant une occurrence de a.

    On considere que tout caractere non alphabetique (a-z ou A-Z) comme etant un
    caractere special.

    Vous pourrez tester votre implementation sur les fichiers tatayoyo.txt et
    papayou.txt fournis, ou tout autre composition de votre choix, y compris le
    repertoire de Nana Mouskouri.

    Competences : 26,18,31,42,48,49,50
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    /*
        Affiche un message d'erreur si l'utilisateur oublie l'argument
        a passer en ligne de commandes.
    */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s fichier.txt\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* On recupere le nom du fichier a ouvrir sur la ligne de commandes. */
    const char *texte = argv[1];

    /*
        On va compter les caracteres dits "speciaux", c'est-a-dire
        tous ceux qui ne sont pas alpha (autres que a-z ou A-Z).
    */
    uint64_t caracteres_speciaux = 0;

    /* Ce tableau compte le nombre d'occurrences de lettres dans le fichier. */
    uint64_t alphabet[26] = { 0 };


    return EXIT_SUCCESS;
}
