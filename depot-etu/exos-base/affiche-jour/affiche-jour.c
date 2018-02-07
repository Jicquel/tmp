/*
    Enonce :

    L'objectif de cet exercice est de manipuler un type
    enumere. L'utilisateur appelera ce programme avec un entier en
    argument sur la ligne de commande. Cet entier represente un jour de
    la semaine: 1 pour lundi, 2 pour mardi, etc. On vous demande de
    completer ce programme de telle sorte que :

      - la chaine de caracteres "Le nombre entre correspond a un jour de
      semaine." soit affichee si le nombre passe en argument du programme
      est compris entre 1 et 5 (lundi au vendredi) ;

      - la chaine de caracteres "Le nombre entre correspond a un jour du
      week-end." soit affichee si le nombre passe en argument du programme
      est 6 ou 7 (samedi ou dimanche) ;

      - la chaine de caracteres "Le nombre entre doit etre compris entre 1
      et 7!" soit affichee si le nombre passe en argument du programme
      n'est pas compris entre 1 et 7.

    On utilisera un type enumere pour representer les jours de la
    semaine, et une construction switch pour enumerer les valeurs
    possibles prises par l'entier 'nombre' declare dans le main.

    Competences : 21,65
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

enum jours{LUNDI = 1, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

int main(int argc, char **argv)
{
    /* Affiche un message d'erreur si l'utilisateur oublie l'argument
     * a passer en ligne de commandes. */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s nombre\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* Convertit l'argument passe par l'utilisateur en entier. */
    int32_t nombre = atoi(argv[1]);
    printf("%i",MARDI);
    if(nombre > DIMANCHE || nombre < LUNDI){
        printf("Le nombre entier doit être compris entre 1 et 7");
        }
    else if(nombre >= SAMEDI)
        printf("week-end!");
    else
        printf("semaine!");

    return EXIT_SUCCESS;
}
