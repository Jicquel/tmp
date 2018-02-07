/*
    Enonce :

    Cet exercice va vous faire manipuler les fonctions de la libc
    permettant la lecture/l'ecriture caractere par caractere de
    fichiers.

    On cherche a generer une version codee d'un fichier contenant un
    message en clair. L'utilisateur definit une cle comprise entre 1 et
    25 qui permettra d'encoder le message. Voici le principe d'encodage
    que l'on va implementer ici dans la fonction coder_lettre(var, cle) :

        * On note k la cle definie par l'utilisateur ;

        * On commence par ecrire la cle en premiere position dans le message
        de sortie (pour decodage futur) ;

        * Ensuite, pour chaque caractere var du message d'entree:
        ecrire coder_lettre(var, cle) dans le message de sortie

    L'algorithme de la fonction coder_lettre(var, cle) est decrit ci-dessous :

    Si var est une lettre de l'alphabet (minuscule ou majuscule), on
    remplace dans le message de sortie le caractere var par le caractere
    positionne k positions plus loin dans la table ASCII. Par exemple,
    si var vaut 'b' et k vaut 3, on remplacera var dans le message de
    sortie par le caractere 'e'. En effet, si on considere 'b' comme
    etant l'origine du deplacement, on a position('b') = 0,
    position('c') = 1, position('d') = 2 et donc position('e') = 3.

    On fera en sorte ici qu'une miniscule en entree produise une
    minuscule en sortie, de meme pour les majuscules. Autrement
    dit, vous devez faire en sorte que le suivant du caractere 'z'
    soit 'a' et que le suivant du caractere 'Z' soit 'A'.

    Ainsi l'encodage du caractere 'x' avec la cle 4 donne le
    caractere 'b'. En effet, comme on considere que le suivant de 'z' est
    'a', on a :

        coder_lettre('x', 1) qui renvoie 'y' ;
        coder_lettre('x', 2) qui renvoie 'z' ;
        coder_lettre('x', 3) qui renvoie 'a' ;
        coder_lettre('x', 4) qui renvoie 'b' ;

    Si var n'est pas une lettre de l'alphabet, on copie le caractere tel
    quel dans le message de sortie.

    La cle doit etre ecrite sur un octet et non sous la forme d'une chaine ASCII.
    Sans cela, l'executable decoder ne fonctionnera pas.

    Vous pourrez tester votre implementation sur le fichier enonce-fable.txt
    qui se trouve dans le repertoire de l'exercice, en lancant par exemple :

        ./encoder enonce-fable.txt fable-codee.txt 7

    Pour savoir si votre fichier est correctement encode, passez-le en
    parametre du programme "enonce-decoder" qui se trouve aussi dans ce meme
    repertoire :

        ./enonce-decoder fable-codee.txt

    Si vous ne voyez pas s'afficher le contenu du message qui se trouve
    dans fable.txt ici, c'est que vous n'avez pas fini de travailler!

    Competences : 42,48,49,50,51,52
    Difficulte : 4
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void verif_params(int argc, char **argv)
{
    if (argc != 4 || atoi(argv[3]) < 1 || atoi(argv[3]) > 25) {
        fprintf(stderr, "Usage: %s input.txt output.txt key\n", argv[0]);
        fprintf(stderr, "ou:\n");
        fprintf(stderr, "\t- input.txt est le nom du fichier texte a coder ;\n");
        fprintf(stderr, "\t- output.txt est le nom du fichier dans lequel enregistrer le texte code ;\n");
        fprintf(stderr, "\t- key est un entier compris entre 1 et 25.\n");
        exit(EXIT_FAILURE);
    }
}

static char coder_lettre(char c, uint8_t cle)
{
    /* Pour que le compilateur soit content. */
    return c;
}


int main(int argc, char **argv)
{
    verif_params(argc, argv);


    return EXIT_SUCCESS;
}
