/*
    Enonce :

    Ici, on illustre l'utilisation du preprocesseur. Comme son nom
    l'indique, le preprocesseur passe avant tout le monde dans les
    differentes passes de compilation. En particulier, il passe avant la
    phase d'analyse syntaxique du programme C. Son role est de remplacer
    toutes les directives preprocesseur (tout ce qui debute par #, comme
    #include, #define, ...) par ce qu'elles representent. Il travaille
    directement sur le texte du programme. Par exemple, le preprocesseur
    va remplacer toutes les etiquettes definies par des #define par ce
    qu'elles representent _dans le texte du programme_. Le compilateur
    effectue ensuite l'analyse syntaxique de ce code modifie.

    Par exemple, le code suivant :

        #define TOTO printf("pouet pouet!\n")

    printf("Message cache: ");
    TOTO;

    sera remplace par le preprocesseur par le code :

        printf("Message cache: ");
        printf("pouet pouet!\n");

    L'exercice consiste a observer et comprendre ce qui se passe quand
    on compile le programme suivant. On vous encourage notamment a faire
    l'effort d'effectuer la phase de preprocesseur sur papier, pour voir
    si vous etes capable de predire ce que fait ce programme sans le
    compiler/l'executer pour de vrai.

    Competences : 103
    Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>

#define BOWIE "ch?v=v--IqqusnNQ\n"
#define oO printf(
#define DAVID "be.com/wat"
#define TO "utu"
#define TRIBUTE "https://www.yo"
#define Oo );

int main(void)
{
    oO TRIBUTE TO DAVID BOWIE Oo

    return EXIT_SUCCESS;
}
