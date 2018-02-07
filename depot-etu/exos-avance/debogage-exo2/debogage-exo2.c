/*
  Enonce :
  L'objectif est de deboguer ce programme qui semble faire des erreurs d'arithmetique.

  Compilez-le et trouvez le bug a l'aide des methodes adaptees de debogage.

  Competences : 5,40,108,109,112
  Difficulte : 2
*/
#include <stdio.h>

#define VAL 42
#define ZERO VAL-42

int main()
{
	int zero, la_tete_a_toto, i, j, k;
	printf("VAL=%d\n", VAL);
	printf("ZERO=%d\n", ZERO);
	zero = ZERO;					/* 0 */
	la_tete_a_toto = zero * ZERO;	/* 0 */
	i = VAL + VAL;					/* 84 */
	j = la_tete_a_toto + i;			/* 84 */
	k = zero + la_tete_a_toto + j;	/* 84 */
	printf("La, normalement, on devrait avoir 84 : %d\n", k);
	printf("Enfin, en principe ...\n");
	return 0;
}

