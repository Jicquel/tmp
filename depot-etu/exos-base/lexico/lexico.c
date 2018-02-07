/*
Enonce :

On implemente ici quelque chose qui ressemble a la fonction standard
strcmp(), a savoir un programme qui compare deux chaines de caracteres.

Pour ce faire, on vous demande d'implementer une fonction compare_lettres()
qui compare deux caracteres selon l'ordre lexicographique, puis d'utiliser
cette fonction pour implementer une fonction compare_mots() dont le
prototype et le comportement est identique a la fonction strcmp().

Le cahier des charges de ces fonctions est donne en commentaires dans le
squelette de code ci-dessous.

Competences : 32,41,42
Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*
   Compare les deux lettres passees en parametre.
Retourne :
-1 si c1 est avant c2 dans l'alphabet ;
0 si c1 et c2 representent la meme lettre ;
1 si c1 est apres c2 dans l'alphabet.
*/
static int8_t compare_lettres(char c1, char c2) {
    if(c1 == c2)
        return 0;
    if(c1 < c2)
        return -1;
    return 1;
}

/*
   Compare les deux mots passes en parametre.
Retourne :
-1 si m1 est avant m2 selon l'ordre lexicographique ;
0 si m1 et m2 representent le meme mot ;
1 si m1 est apres m2 selon l'ordre lexicographique.
*/
static int8_t compare_mots(const char *m1, const char *m2) {
    int size_m1 = strlen(m1);
    int size_m2 = strlen(m2);

    int size_min = size_m1 > size_m2? size_m2 : size_m1;
    for(int i = 0; i < size_min ; i++){
        switch(compare_lettres(m1[i], m2[i])){
            case -1:
                return -1;
                break;
            case 1:
                return 1;
                break;
            default:
                break;
        }
    }
    return 0;
}

/*
   Teste votre fonction compare_mots(m1, m2).
   Affiche "m1 < m2" sur la sortie standard si m1 < m2,
   "m1 > m2" si m1 > m2 et "m1 = m2" si m1 = m2.

   Je sais, c'est fou.
   */
static void test_comparaison(const char *m1, const char *m2) {
    /*
       Astuce pour contracter l'ecriture de cette fonction, en remarquant que
       les valeurs de retour possibles de la fonction compare_mots() sont
       -1 (<), 0 (=) et 1 (>).

       Si on range les caracteres '<', '=' et '>' dans un tableau aux index
       0, 1 et 2, il suffira de rajouter 1 a la valeur de retour de compare_mots()
       pour retrouver le caractere de comparaison qui convient pour l'affichage.

       Z'avez pas compris? On s'en tape c'est pas l'objet de l'exercice!
       Z'avez pas compris et la phrase precedente ne vous convient pas?
       Parcourez vite fait les salles machines du batiment E, vous trouverez
       certainement le prof qui a ecrit cet exo (c'est celui qui a des lunettes).
       */
    char seps[] = "<=>";
    int8_t comparaison = compare_mots(m1, m2);

    printf("%s %c %s\n", m1, seps[comparaison + 1], m2);
}

int main(void)
{
    /* RIP Luis Mariano! */
    test_comparaison("lexico", "lexiiiiiiiiico");

    /* Presque pareil, non? */
    test_comparaison("lexico", "lexicoo");

    /* Non, pareil presque? */
    test_comparaison("lexicoo", "lexico");

    /* Ajoutez votre test debile ici... */
    test_comparaison("efgh", "abcd");
    test_comparaison("a", "bcd");
    test_comparaison("42", "42");

    return EXIT_SUCCESS;
}
