/*
    Enonce :

    Dans cet exercice, on manipule directement les bits d'un entier.  On
    modelise l'ensemble des matieres d'un eleve du secondaire sous la
    forme d'un entier 8 bits. On associe a chaque matiere une position
    differente dans cet octet, que l'on interprete de cette facon :

        Si le k-ieme bit de l'octet est a 1, c'est que l'eleve maitrise la
        matiere correspondante ; sinon, c'est qu'il n'a rien compris a cette
        matiere.

    On vous demande d'implementer dans un premier temps les fonctions
    de manipulation des ensembles codes sur un octet, a savoir :

        - u8_set_bit(pos, u, val) qui affecte la valeur 'val' au 'pos-ieme'
            bit de 'u' ;

        - u8_bit_is_set(pos, u) qui renvoie vrai si le 'pos-ieme' bit de 'u'
            vaut 1 et faux s'il vaut 0.

    Vous utiliserez ensuite ces deux fonctions pour implementer la
    fonction evaluer_eleve() qui, etant donne un ensemble de matieres
    produit un affichage indiquant quelles sont celles qui ont ete
    maitrisees par l'eleve et quelles sont celles qui n'ont pas ete
    comprises.

    Enfin, toujours en s'appuyant sur les fonctions de manipulation des
    ensembles definies precedemment, vous implementerez la fonction
    passer_examen() qui, etant donne un ensemble de matieres
    representant les epreuves d'un examen, met a jour les competences
    d'un eleve en fonction de la reussite ou de l'echec a chaque
    epreuve.

    Competences : 15,21,25,34,35
    Difficulte : 5
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

/*
    On definit un nouveau type pour representer l'ensemble des
    competences d'un eleve. Manipuler un skill_set_t revient a
    manipuler un entier non-signe code sur 8 bits, mais le fait de
    definir un type ici ameliore la lisibilite du code : quand on
    definit une variable de type skill_set_t, on comprend qu'on fait
    specifiquement reference a un ensemble de competences. */
typedef uint8_t skill_set_t;

/* Meme chose pour un examen: c'est un ensemble de matieres. */
typedef uint8_t exam_t;

/*
    On definit une constante pour chaque matiere, dont la valeur
    correspond a sa position dans l'octet representant un ensemble.
*/
enum course_id
{
    MATHS = 0,
    PHYSIQUE,
    CHIMIE,
    FRANCAIS,
    HISTOIRE,
    GEO,
    PHILO,
    SPORT,
    NB_MATIERES /* Astuce repandue pour recuperer facilement le
                 * nombre d'elements d'un type enumere. */
};

/*
    Nom des matieres ranges dans le meme ordre que les elements du type
    enumere course_id, pour affichage.
*/
static const char *course_name[NB_MATIERES] = {
    "maths",
    "physique",
    "chimie",
    "francais",
    "histoire",
    "geo",
    "philo",
    "sport"
};

/*
    Renvoie true si le bit en position pos prend la valeur 1 dans
    l'octet u, false sinon.
*/
static bool u8_bit_is_set(uint8_t pos, uint8_t u)
{
    bool ret = false;
    return ret;
}

/*
    Change la valeur du bit en position pos dans l'octet u, pour lui
    donner la valeur 1 si val vaut true et 0 sinon. La fonction
    retourne l'octet modifie.
*/
static uint8_t u8_set_bit(uint8_t pos, uint8_t u, bool val)
{
    uint8_t ret = 0;
    return ret;
}

/*
    Parcourt l'ensemble s passe en parametre et produit un affichage de
    la forme :

        Paul est nul en maths!
        Paul est nul en physique!
        Paul est nul en chimie!
        Paul est bon en francais!
        Paul est bon en histoire!
        Paul est nul en geo!
        Paul est bon en philo!
        Paul est nul en sport!

    ou Paul est nom de l'eleve contenu dans le parametre nom, ou :

        Wow, Paul maitrise tout!

    si l'eleve evalue maitrise toutes les matieres.
*/
static void evaluer_eleve(const char *nom, skill_set_t s)
{
}

/*
    Fait passer un examen a un etudiant dont les competences sont
    representees par le parametre s.

    En pratique, exam est l'ensemble des epreuves (matieres) composant
    l'examen a passer. Pour se rapprocher de la vraie vie, on tirera un
    nombre aleatoire pour modeliser la reussite ou l'echec a une
    epreuve : si ce nombre est impair, l'epreuve est reussie, sinon,
    l'epreuve est echouee.

    Cette fonction renvoie une nouvelle version des competences de
    l'eleve, mise a jour en fonction de la reussite ou de l'echec des
    epreuves de l'examen passe en parametre.
 */
static skill_set_t passer_examen(exam_t exam, skill_set_t s)
{
    skill_set_t ret = 0;
    return ret;
}


int main(void)
{
    /*
        Initialisation du generateur de nombres aleatoires necessaire
        pour implementer passer_examen (voir man 3 rand).
    */
    srand(time(NULL));

    skill_set_t s = 0;

    /*
        Hypotheses douteuses : les litteraires sont nuls en maths, en
        physique, en chimie et en sport...
    */
    s = u8_set_bit(FRANCAIS, s, true)
        | u8_set_bit(HISTOIRE, s, true)
        | u8_set_bit(GEO, s, true)
        | u8_set_bit(PHILO, s, true);
    evaluer_eleve("litteraire", s);
    evaluer_eleve("scientifique", ~s);

    /* un eleve bon en sport et en chimie... */
    s = 132;
    evaluer_eleve("mystere", s);

    s = 0;
    evaluer_eleve("toto", s);

    /* Deuxieme chance pour toto, il passe les examens litteraires. */
    exam_t e = 0;
    e = u8_set_bit(FRANCAIS, e, true)
        | u8_set_bit(HISTOIRE, e, true)
        | u8_set_bit(GEO, e, true)
        | u8_set_bit(PHILO, e, true);

    printf("toto repasse ses exams...\n");
    s = passer_examen(e, s);
    evaluer_eleve("toto", s);

    return EXIT_SUCCESS;
}
