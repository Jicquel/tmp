/*
Enonce :

On manipule ici des fichiers en C. L'exercice consiste a programmer
un equivalent a la commande 'cat' que vous connaissez deja, plus
precisement au comportement de cette commande quand on lui fournit
une liste de fichiers en parametre.

Votre programme C devra donc ouvrir les fichiers passes en
parametre, puis afficher leur contenu sur la sortie standard, les
uns a la suite des autres. Si le programme est appele sans
parametre, un message d'erreur s'affiche et le programme termine.

Le code qui effectue l'ouverture du fichier, sa lecture, l'affichage
de son contenu et sa fermeture sera place dans une fonction de
prototype :

void cat_file(const char *file_name);

Competences : 48,49,50,56,67,70,74,85
Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>

void cat_file(const char *file_name){


    FILE *fp;
    char c;
    if ((fp = fopen(file_name ,"r")) == NULL)
    {
        fprintf(stderr,"Impossible d’ouvrir le fichier données en lecture\n");
        exit(1);
    }
    while ((c = fgetc(fp)) != EOF)
        printf("%c",c);
}


int main(int argc, char **argv)
{
    if (argc <= 1){
        fprintf(stderr, "Besoin d'au moins un nom de fichier");
        exit(1);
    }

    for(int i = 1 ; i < argc ; i++)
    {
        cat_file(argv[i]);
    }
    return EXIT_SUCCESS;
}
