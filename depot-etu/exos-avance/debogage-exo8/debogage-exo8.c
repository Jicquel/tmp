/*
  Enonce :
  Les fonctions de manipulation de chaines en C ont l'air puissantes
  quand on regarde un programme comme celui-la.
  Mais executez-le et vous constaterez que le langage C ne verse jamais dans la facilite.

  Compilez-le et trouvez les bugs a l'aide des methodes adaptees de debogage.

  Competences : 90,107,108,109
  Difficulte : 5
*/

#include <stdio.h>

int main()
{
	char *hello = "hello, world!" + 3;
	char *charstring = 'h' + "ello, world!";

	printf("hello=%s, charstring=%s.\n", hello, charstring);
	printf("Eh non, on n'est pas en Java !\n");
	return 0;
}

