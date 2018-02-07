/*
  Enonce :

  Le programme sur lequel on travaille ici effectue la division de deux nombres
  entiers passes en argument sur la ligne de commande et affiche le resultat.

  On souhaite s'appuyer sur les directives de preprocesseur pour generer deux
  versions de ce programme a partir d'un meme fichier source : une version
  travaillant avec des nombres reels simple precision (float), l'autre travaillant
  sur des nombres reels double precision (double).

  Le Makefile fourni genere deja ces deux versions a partir du fichier divflot.c.
  Vous remarquerez que la seule difference entre les regles de compilation
  generant divflot-simple.o et divflot-double.o est la presence ou non du
  flag de compilation "-DDOUBLE_PREC". Ce flag definit (-D) l'etiquette DOUBLE_PREC
  pour le preprocesseur, ce qui a pour effet d'activer la compilation des portions
  de code se trouvant a l'interieur d'un bloc #ifdef DOUBLE_PREC.

  A titre d'exemple, nous avons defini une etiquette MESSAGE qui sera remplacee
  par le preprocesseur (donc avant la phase de compilation du programme) par :
  - la chaine de caracteres "Mode double" si l'etiquette DOUBLE_PREC a ete definie ;
  - la chaine de caracteres "Mode float" sinon.

  Votre travail va donc consister a utiliser le preprocesseur pour remplacer
  toutes les occurrences de float par double dans le cas ou l'etiquette
  DOUBLE_PREC est definie.

  Voici un exemple de comportement attendu de votre programme :

  ./divflot-simple 5 3
  Mode float
  5 / 3 = 1.666666626930236816

  ./divflot-double 5 3
  Mode double
  5 / 3 = 1.666666666666666741

  Competences : 4,103
  Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>

#ifdef DOUBLE_PREC
#define MESSAGE "Mode double\n"
#else
#define MESSAGE "Mode float\n"
#endif /* DOUBLE_PREC */

int main(int argc, char **argv)
{
    /* Affiche un message d'erreur si l'utilisateur oublie l'argument
     * a passer en ligne de commandes. */
    if (argc < 3) {
        fprintf(stderr, "Usage: %s x y\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    printf(MESSAGE);

    /* Convertit le premier argument passe par l'utilisateur en entier. */
    int x = atoi(argv[1]);

    /* Convertit le deuxieme argument passe par l'utilisateur en entier. */
    int y = atoi(argv[2]);

    /* On effectue la division! */
    float res = (float)x / (float)y;

    /*
        On affiche le resultat avec jusqu'a 20 chiffres
        avant la virgule et jusqu'a 18 chiffres apres la virgule.
    */
    printf("%d / %d = %20.18f\n", x, y, res);

    return EXIT_SUCCESS;
}
