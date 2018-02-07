/*
    Enonce :

    Un palindrome, ou "mot miroir", est un mot dont l'ordre
    des lettres est le meme qu'on le lise de droite a gauche ou de
    gauche a droite. Par exemple, le prenom Anna est un
    palindrome. Dans cet exercice, on vous demande d'implementer la
    fonction est_palindrome, qui renvoie vrai si le mot passe en
    parametre est un palindrome et faux sinon. La fonction main de ce
    fichier permet de tester votre fonction est_palindrome. On ne vous
    demande pas de comprendre ce qu'elle fait, sachez seulement que le
    programme ./palindrome prend en argument le mot sur lequel
    travailler, par exemple:

        ./palindrome anna
        anna est bien un palindrome!

    Competences : 15,18,19,41,62,66,67
    Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

static bool est_palindrome(const char *mot)
{
    return true;
}

/*
    Ce prototype de fonction main permet de recuperer les arguments
    passes au programme sur la ligne de commande (ici, le mot sur
    lequel travailler).
*/
int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s mot\n", argv[0]);
        exit(EXIT_FAILURE);
    }


    return EXIT_SUCCESS;
}
