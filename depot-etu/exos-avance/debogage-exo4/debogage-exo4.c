/*
  Enonce :
  L'objectif est de deboguer ce programme qui manipule des pointeurs et tableaux un peu trop a la maniere d'un apprenti sorcier.

  Compilez-le et trouvez le bug a l'aide des methodes adaptees de debogage.

  Jouez le jeu: votre compilateur devrait vous avertir, mais ignorez le warning un moment et allez plus loin dans la comprehension du probleme.

  Competences : 86,87,107,108,109
  Difficulte : 5
*/

#include <stdio.h>

int tab[4][4] =
    { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };

int *tab2[] = { tab[0], tab[1], tab[2], tab[3] };


void affiche_tab(int tab[][4])
{
	int i, j;
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("%2d ", tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	fflush(stdout);
}

void affiche_tab2(int *tab[])
{
	int i, j;
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("%2d ", tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	fflush(stdout);
}

int main()
{
	affiche_tab(tab);
	affiche_tab2(tab2);
	affiche_tab2(tab);
	affiche_tab(tab2);
	return 0;
}

