/*
  Enonce :
  L'objectif est de deboguer ce programme qui a du mal a discerner le vrai du faux.

  Compilez-le et trouvez le bug a l'aide des methodes adaptees de debogage.

  Competences : 2,101,108,109
  Difficulte : 3
*/
#include <stdio.h>

const int TRUE = 1;
const int FALSE = 0;

int function_returning_false()
{
	return FALSE;
}

int main()
{
	if (function_returning_false) {
		printf("function returned true\n");
	}
}

