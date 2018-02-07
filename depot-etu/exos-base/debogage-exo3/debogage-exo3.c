/*
    Enonce :
    L'objectif est de deboguer ce programme qui presente une boucle recalcitrante.

    Compilez-le et trouvez le bug a l'aide des methodes adaptees de debogage.

    Competences : 13,66,108,109
    Difficulte : 2
*/
#include <stdio.h>
#include <stdint.h>

int main()
{
	uint16_t i;
	for (i = 12; i >= 0; --i) {
		printf("i = %d\n", i);
	}
}


