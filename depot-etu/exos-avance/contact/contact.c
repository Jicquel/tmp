/*
  Enonce :
  
  Dans cet exercice, vous allez devoir allouer et initialiser des
  structures de donnees complexes. Les fonctions qui effectuent
  l'allocation de ces structures de donnees seront de deux formes
  differentes. Dans un premier cas, la fonction renvoie un pointeur
  vers la structure de donnees allouee et initialisee. Dans un autre
  cas, la structure de donnees a allouer est passee en parametre de la
  fonction, et la fonction ne renvoie rien (procedure).

  De maniere symetrique, on etudiera la liberation de ces structures
  de donnees, avec modification ou non du pointeur passe en parametre
  de la fonction de liberation.

  Une fonction main permettant de tester votre programme est
  fournie. Bien entendu, en plus de l'affichage des deux contacts sur
  la sortie standard, votre programme ne devra pas comporter de fuite
  memoire (demandez a valgrind de vous en donner la preuve).

  Competences : 43,45,87,93,94,98,111
  Difficulte : 4
*/

#include <stdlib.h>
#include <stdint.h>

/* Structure de donnees representant l'adresse postale d'un
   contact. */
struct adresse
{
    uint16_t numero;
    char *rue;
    uint32_t code_postal;
    char *pays;
};

/* Structure de donnees representant un contact. */
struct contact
{
    char *prenom;
    char *nom;
    struct adresse *adr;
};


/* 
   Fonction de creation d'une adresse postale. Elle retourne une
   adresse postale nouvellement allouee et initialisee en fonction des
   parametres numero, rue, code_postal et pays.
   */
static struct adresse *creer_adresse(uint16_t numero,
                                     const char *rue,
                                     uint16_t code_postal,
                                     const char *pays)
{
    struct adresse *adr = NULL;
    return adr;
}

/* 
   Fonction de creation d'un contact. A la difference de
   creer_adresse, on ne va pas retourner le contact nouvellement
   alloue et initialise, mais on va plutot allouer et initialiser le
   (struct contact *) dont l'adresse est passee dans le parametre
   nouveau_contact. 
   */
static void creer_contact(struct contact **nouveau_contact,
                          const char *prenom,
                          const char *nom,
                          uint16_t numero,
                          const char *rue,
                          uint16_t code_postal,
                          const char *pays)
{
}

/*
   Libere l'adresse postale passee en parametre. En sortie, le pointeur
   qui pointait sur cette adresse vaut NULL.
   */
static void liberer_adresse(struct adresse **adr)
{
}

/*
   Libere le contact passe en parametre. Notez qu'ici, on ne specifie
   rien sur la valeur que doit prendre le pointeur qui pointait sur le
   contact libere apres execution de la fonction liberer_contact.
   */
static void liberer_contact(struct contact *c)
{
}

/*
   Affiche le contact passe en parametre (son prenom, son nom, son
   adresse) sur la sortie standard.
   */
static void afficher_contact(struct contact *c)
{
}


int main(void)
{
    struct contact *led_zep = NULL, *acdc = NULL;
    creer_contact(&led_zep, "Led", "Zeppelin", 1, "Stairway to Heaven", 1977, "UK");
    creer_contact(&acdc, "AC", "DC", 666, "Highway to Hell", 1979, "Australia/UK");

    afficher_contact(led_zep);
    afficher_contact(acdc);

    liberer_contact(led_zep);
    liberer_contact(acdc);

    return EXIT_SUCCESS;
}
