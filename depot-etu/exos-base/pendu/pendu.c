/*
    Enonce :

    On souhaite implementer une interface en ligne de commande pour une
    variante du jeu du pendu. L'utilisateur va devoir trouver un mot represente
    par une chaine de caracteres constante dans le programme. A chaque tour de
    jeu, le joueur propose une lettre sur la ligne de commande. Si cette lettre
    fait partie du mot a trouver, le programme devoile toutes les occurrences de
    cette lettre dans le mot. Les lettres qui n'ont pas encore ete trouvees sont
    affichees a l'aide du caractere '_'.

    Voici un exemple de sortie du programme :

        ______ : choisissez une lettre :
        n
        ___n__ : choisissez une lettre :
        t
        ___nt_ : choisissez une lettre :
        b
        b__nt_ : choisissez une lettre :
        a
        Rate! 'a' ne figure pas dans le mot a trouver...
        b__nt_ : choisissez une lettre :
        o
        bo_nt_ : choisissez une lettre :
        u
        bount_ : choisissez une lettre :
        y
        Mot trouve en 7 coups!

    Vous remarquerez que le programme doit compter le nombre de propositions effectuees
    pour arriver au resultat. Il doit aussi afficher un message explicite lorsque
    la lettre proposee ne fait pas partie du mot a trouver.

    On utilisera un tableau de caracteres (un tampon) qui contiendra les lettres
    decouvertes en cours de partie. Dans l'exemple ci-dessus, ce tampon contient
    successivement "______" puis "___n__" puis "___nt_", ...

    On utilisera la fonction getchar() pour recuperer un caractere entre au clavier.
    Tout caractere propose par l'utilisateur qui n'est pas alphabetique doit etre
    ignore (man isalpha). On impose l'utilisation d'une structure de controle "do while()"
    pour traiter cette partie.

    Competences : 18,19,41,69
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    /* La chaine de caracteres a trouver, a changer selon votre inspiration. */
    const char *a_trouver = "bounty";
    /*
        Le tampon representant les lettres trouvees / a trouver.
        Sa taille est bien strlen(a_trouver) + 1, puisque la fonction
        strlen() retourne le nombre de caracteres precedant le caractere
        de fin de chaine (\0) qu'il faut donc compter a part.
    */
    size_t taille_chaine = strlen(a_trouver) + 1;
    char tampon[taille_chaine];

    return EXIT_SUCCESS;
}
