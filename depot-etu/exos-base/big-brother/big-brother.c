/*
    Enonce :

    Big Brother a besoin d'un programme pour enregistrer des messages
    textuels.

    Il vous engage pour implementer la fonction log_message qui ecrit un
    message dans un flux de sortie passe en parametre.

    Competences : 55
    Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>

/* Ecrit le message "message" dans le flux stream. */
static void log_message(FILE *stream, const char *message)
{
    int ret = fputs(message, stream);    
    if(ret == EOF){
        perror("log_message: ");
        exit(EXIT_FAILURE);
    }
}

int main(void)
{
    log_message(stdout, "Un message sur la sortie standard.\n");
    log_message(stderr, "Pis un autre sur la sortie d'erreurs, tiens!\n");

    FILE *f = fopen("log-secret.txt", "w");
    if (f == NULL) {
        perror("fopen log-secret.txt : ");
        exit(EXIT_FAILURE);
    }
    log_message(f, "Un dernier dans un fichier, pour la route. \
                    I am watching you.\n");
    fclose(f);

    return EXIT_SUCCESS;
}
