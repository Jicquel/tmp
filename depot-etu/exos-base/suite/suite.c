/*
    Enonce :

    Cet exercice est un exercice de debug. Le programme suivant comporte
    trois problemes, a vous de les trouver en utilisant l'outil approprie,
    puis de les corriger.

    Ce programme permet de construire la suite croissante des N premiers
    entiers x tels x = 2^i, pour i allant de 1 a N.

    On utilise l'allocation dynamique pour allouer l'espace memoire qui
    permettra de stocker les termes de la suite, ce qui nous permet a
    notre implementation de gerer n'importe quelle taille de suite.

    Competences : 20,35,36,91,92,94,96,107,111
    Difficulte : 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>

/* La structure suite modelise notre suite de puissances de deux. */
struct suite
{
    /* Un tableau de puissances de deux. */
    uint32_t *terme;

    /* Le nombre de termes de la suite. */
    size_t taille;
};

/*
    Alloue et initialise une nouvelle suite dont la taille est passee
    en parametre. La fonction retourne un pointeur sur la suite
    nouvellement creee.
*/
static struct suite *init_suite(size_t taille)
{
    /*
        On souhaite creer un objet dont la duree de vie depasse celle
        de la fonction init_suite. On utilise donc l'allocation
        dynamique : l'objet perdurera en memoire tant qu'on n'aura pas
        explicitement libere la memoire qui lui est associe.
    */
    struct suite *ret = malloc(sizeof(struct suite));

    /*
        La ligne suivante indique : "Je suis certain que ret est
        different de NULL!". Si ce n'est pas le cas, le programme
        s'arrete et un message explicite s'affiche sur le terminal
        (man assert). Si on voulait en savoir plus sur l'erreur qui
        s'est produite, on pourrait utiliser perror (man malloc, man
        perror).
    */
    assert(ret != NULL);

    ret->taille = taille;
    /*
        Meme chose pour le tableau de termes : on souhaite qu'il soit
        toujours accessible quand cette fonction aura retourne.
    */
    ret->terme = malloc(taille * sizeof(uint32_t));
    assert(ret->terme != NULL);

    for (size_t i = 0; i < taille; i++) {
        /*
            On construit la suite des taille premiers entiers x tels
            que x = 2^i.
        */
        ret->terme[i] = 1 << (i+1);
    }

    /*
        On retourne simplement l'adresse en memoire ou retrouver la
        suite allouee dynamiquement.
    */
    return ret;
}


static void print_suite(struct suite *s)
{
    printf("La suite comporte %zu termes:\n", s->taille);
    for (size_t i = 0; i < s->taille; i++) {
        printf("%u ", s->terme[i]);
    }
    printf("\n");
}

int main(void)
{
    /* On cree une suite de 10 termes. */
    struct suite *s = init_suite(10);

    /* On l'affiche! */
    print_suite(s);
    free(s->terme);
    free(s);

    return EXIT_SUCCESS;
}
