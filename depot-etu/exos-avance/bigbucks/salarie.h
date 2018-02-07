#ifndef SALARIE_H
#define SALARIE_H

/*
    Structure de donnees representant un salarie.
    Elle devra contenir, dans cet ordre :
    - son prenom sous la forme d'une chaine de caracteres de longueur max 16 ;
    - son nom sous la forme d'une chaine de caracteres de longueur max 32 ;
    - son age, sous la forme d'un entier non signe 8 bits ;
    - son anciennete dans l'entreprise, sous la forme d'un entier non-signe 8 bits ;
    - son salaire mensuel, sous la forme d'un entier non signe 32 bits.
*/
struct salarie;

/* Alloue et retourne un struct salarie. */
extern struct salarie *allouer_salarie(void);

/*
    Initialise le salarie passe en parametre.
    Le salarie s a deja ete alloue avant l'appel
    a init_salarie().
*/
extern void init_salarie(struct salarie *s,
                         const char *prenom,
                         const char *nom,
                         uint8_t age,
                         uint8_t anciennete,
                         uint32_t salaire);

/* Effectue l'allocation ET l'initialisation du salarie passe en parametre. */
extern void creer_salarie(struct salarie **s,
                          const char *prenom,
                          const char *nom,
                          uint8_t age,
                          uint8_t anciennete,
                          uint32_t salaire);

/*
    Libere la memoire associee au salarie passe en parametre.
    En sortie, s doit valoir NULL.
*/
extern void plan_social(struct salarie **s);

#endif /* SALARIE_H */
