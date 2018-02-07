/*
  Enonce :

  Les etudiants de 1ere annee Ensimag doivent elire leur representant.
  Le vote effectue, le depouillement a lieu et il vous incombe de publier les resultats.
  Qui Francois, Alain ou Nicolas sera choisi?

  Les resultats de l'election devront etre affiches de deux facons :
  - sous la forme d'un listing trie par ordre alphabetique ;
  - sous la forme d'un listing trie par pourcentage de voix.

  Les candidats sont representes sous la forme d'un tableau de structures
  qu'il faudra trier en fonction du critere choisi.

  L'utilisation de la fonction quicksort() est OBLIGATOIRE dans cet exercice,
  puisqu'il a pour but de vous faire travailler les pointeurs de fonction et
  le passage de parametres de la forme (void *).

  Dans la vraie vie, on n'utilisera jamais quicksort() pour trier un tableau de
  7 elements (demander pourquoi a votre prof d'algo prefere).

  Competences : 28,100,101
  Difficulte : 5
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NB_ETUS 7

/* Structure de donnees representant un etudiant. */
struct etu {
    /* Nom de l'etudiant. */
    char *nom;
    /* Son score, sur 100. */
    float score;
};

/* Affiche le tableau d'etudiants passe en parametre. */
static void afficher_etudiants(struct etu diants[NB_ETUS]) {
    for (size_t i = 0; i < NB_ETUS; i++) {
        printf("%s: %2.1f\n", diants[i].nom, diants[i].score);
    }
}


int main(void)
{
    struct etu diants[NB_ETUS] = {
        { "Francois", 44.1 },
        { "Jean-Frederic", 1.5 },
        { "Alain", 28.6 },
        { "Bruno", 2.4},
        { "Nicolas", 20.7 },
        { "Nathalie", 2.6 },
        { "Jean-Francois", 0.3 }
    };

    /* TODO : On trie les etudiants en fonction de leurs notes en utilisant qsort() */
    printf("Classes par notes croissantes :\n");
    afficher_etudiants(diants);

    /* TODO : On trie les etudiants par ordre alphabetique en utilisant qsort() */
    printf("\nClasses par ordre alphabetique :\n");
    afficher_etudiants(diants);

    return EXIT_SUCCESS;
}
