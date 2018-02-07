/*
    Enonce :

    Des tableaux et des pointeurs.
    L'objectif est de deboguer ce programme dont une boucle est recalcitrante.
    Compilez-le et trouvez les bugs a l'aide des methodes adaptees de debogage.

    Competences : 66,108,109
    Difficulte : 1
*/

#include <stdio.h>

int main()
{
	int i;
	for (i = 0; i <= 42; i++);
	{
		printf("i=%d\n", i);
	}
	return 0;
}

