/*
    Enonce :

    L'objectif est de deboguer ce programme comportant un bug "evident".
    Compilez-le et trouvez le bug a l'aide des methodes adaptees de debogage.

    Competences : 1,2,88,107,108,109
    Difficulte : 1
*/

#include <stdio.h>

int main()
{
	int *age;

	printf("Bonjour,\n");
	printf("Entrez votre age\n");
	scanf("%d", age);
	printf("Vous avez %d ans\n", *age);
	return 0;
}
