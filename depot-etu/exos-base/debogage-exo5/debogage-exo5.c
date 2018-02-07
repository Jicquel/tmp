/*
    Enonce :
    Des tableaux et des pointeurs.

    L'objectif est de deboguer ce programme qui semble habite par des fantomes memoriels...

    Compilez-le et trouvez les bugs a l'aide des methodes adaptees de debogage.

    Competences : 16,77,89,107,108
    Difficulte : 4
*/

#include <stdio.h>

int *a, *b;

void f(int x)
{
	int i[3];
	i[0] = x;
	i[1] = x + 1;
	i[2] = x + 2;
	a = i;
}

void g(int x)
{
	int i[3];
	i[0] = x;
	i[1] = x + 1;
	i[2] = x + 2;
	b = i;
}

int main()
{
	f(1); /* Modifie a */
	printf("a = {%d,%d,%d}\n", a[0], a[1], a[2]);
	g(2); /* Modifie b */
	printf("Abracadabrantesque, a = {%d,%d,%d}\n", a[0], a[1], a[2]);
	return 0;
}

