/*
  Enonce : 
  Au menu de cet exercice: les fonctions de manipulation de la memoire.
  Et au passage, une competence qui n'est pas dans la carte : la gestion
  du temps reel appliquee au calcul de la duree d'execution des process.
  
  Nota Bene : option -std=gnu99 au lieu de -std=c99
  pour pouvoir utiliser la fonction clock_gettime permettant d'obtenir
  une precision de l'ordre de la nanoseconde
  gnu99 = c99 + extensions gnu
  
  Specifications clock_gettime :
  
  int clock_gettime(clockid_t clk_id, struct timespec *tp);
  
  struct timespec {
               time_t   tv_sec;        // seconds
               long     tv_nsec;       // nanoseconds
  };
  
  clk_id : CLOCK_REALTIME, CLOCK_PROCESS_CPUTIME_ID, CLOCK_THREAD_CPUTIME_ID

  NOTA BENE : La fonction standard clock() de la librairie time.h est theoriquement adaptee
  a ce genre de calcul de temps mais fonctionne en realite tres mal, en particulier sous linux.
  
  Competences : 64,95
  Difficulte : 2
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define SIZE 100000

struct ordi {
    char nom[20];
    uint16_t memoire;   // Taille memoire en Go
    uint16_t disque;    // Taille disque en Go
    float vitesse;      // Vitesse processeur en Ghz
};

/* Copie de structure - methode 1 - code complet fourni */
void copyordi1(struct ordi *dst, struct ordi src)
{
    strcpy(dst->nom, src.nom);
    dst->memoire = src.memoire;
    dst->disque = src.disque;
    dst->vitesse = src.vitesse;
}

/* Copie de structure - methode 2 */
void copyordi2(struct ordi *dst, struct ordi src)
{
    /* A completer en une seule instruction */
}

/* Mise a 0 d'un tableau : methode 1 - code complet fourni */
void fillzero1(double *tab, uint32_t length)
{
    for (uint32_t i=0; i< length; i++) {
        tab[i] = 0.;
    }
}

/* Mise a 0 d'un tableau : methode 2 */
void fillzero2(double *tab, uint32_t length)
{
    /* A completer sans aucune boucle et en une seule instruction */
}

/* Copie de tableau : methode 1 - code complet fourni */
void copytab1(double *tab1, double *tab2, uint32_t length)
{
    for (uint32_t i=0; i< length; i++) {
        tab1[i] = tab2[i];
    }
}

/* Copie de tableau : methode 2 */
void copytab2(double *tab1, double *tab2, uint32_t length)
{
    /* A completer sans aucune boucle et en une seule instruction */
}

/* Affichage des 5 premieres valeurs du tableau : code complet fourni */
void print_tab(char *nomtab, double *tab, uint32_t length)
{
    for (uint32_t i = 0; i < ((length >= 5) ? 5 : length); i++) {
        printf("%s[%u] = %lf\n", nomtab, i, tab[i]);
    }
}

/* Affiche et retourne la duree d'un processus dont le nom est passe en parametre ainsi que les temps de debut et de fin */
struct timespec print_duration(char *processus, struct timespec start, struct timespec end)
{
    /*  A completer : 
        Calculer la duree entre le temps end et le temps start
        Le resultat est a mettre dans une structure struct timespec
        Ce resultat sera retourne par la fonction
        Attention au cas ou ou end.tv_nsec est inferieur a start.tv_nsec
        La fonction affichera egalement le resultat selon l'exemple suivant :
        "copytab1 a ete execute en 0 secondes 71458 nanosecondes"
        */
}

/* Affiche le rapport de vitesse entre 2 processus */
void print_speed(char *processus1, char *processus2, struct timespec timer1, struct timespec timer2)
{
    /*  A completer, exemple d'affichage desire :
        "copytab2 est alle 9.45 fois plus vite que copytab1" */
}

int main(void)
{
    struct timespec start, end, timer1, timer2;
    
    struct ordi o1, o2;
    strcpy(o1.nom, "Asus272");
    o1.memoire = 8;
    o1.disque = 1000;
    o1.vitesse = 2.4;

    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    copyordi1(&o2, o1);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer1 = print_duration("copyordi1", start, end);

    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    copyordi2(&o2, o1);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer2 = print_duration("copyordi2", start, end);
    
    print_speed("copyordi1", "copyordi2", timer1, timer2);
    
    double tab1[SIZE], tab2[SIZE];
    for (uint32_t i=0; i< SIZE; i++) {
        tab1[i] = i * 3.14159;
    }
    
    print_tab("tab1", tab1, SIZE);
    
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    fillzero1(tab2, SIZE);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer1 = print_duration("fillzero1", start, end);
    
    print_tab("tab2", tab2, SIZE);

    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    fillzero2(tab2, SIZE);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer2 = print_duration("fillzero2", start, end);

    print_tab("tab2", tab2, SIZE);
    
    print_speed("fillzero1", "fillzero2", timer1, timer2);

    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    copytab1(tab2, tab1, SIZE);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer1 = print_duration("copytab1", start, end);
    
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &start);
    copytab2(tab2, tab1, SIZE);
    clock_gettime( CLOCK_PROCESS_CPUTIME_ID, &end);
    timer2 = print_duration("copytab2", start, end);

    print_tab("tab2", tab2, SIZE);
    
    print_speed("copytab2", "copytab1", timer2, timer1);
    print_speed("copytab1", "copytab2", timer1, timer2);
    
    return EXIT_SUCCESS;
}

