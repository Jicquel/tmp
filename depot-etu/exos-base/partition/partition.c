/*
    Enonce :

    On s'interesse pour cet enonce a la traduction d'un code python en C.
    On vous demande de traduire le code et faire une mesure de performances afin de comparer
    la lisibilite et les performances.

    On souhaite programmer une fonction calcul_nombre_partitions
    qui prend en entree un tableau d'entiers et renvoie le nombre
    de possibilites qu'on a de repartir les entiers en deux ensembles de totaux egaux.

    L'algorithme fonctionne de la maniere suivante :
    pour chaque entier, on doit choisir si on le met dans le premier ou le second ensemble.
    C'est un choix binaire qu'il est donc possible de coder par un bit.
    Comme on a n entiers, il suffit de n bits pour coder une partition.
    Enumerer toutes les partitions revient alors a iterer sur toutes les combinaisons de n bits.
    Pour ce faire, il suffit de parcourir tous les entiers de 0 a 2^n -1.

    Une fois la traduction de python a C terminee, on peut alors facilement comparer
    les temps de calcul a l'aide de la commande time.
    Par exemple "time ./partition.py" vous affiche le temps passe pour le programme python.

    Competences : 16,34,35,66
    Difficulte : 1
*/
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>

uint32_t calcul_somme(uint32_t entiers[], uint32_t taille)
{
    uint32_t total = 0;
    for(uint32_t i = 0 ; i < taille ; i++) {
        total += entiers[i];
    }
    return total;
}

uint32_t calcul_nombre_partitions(uint32_t entiers[], uint32_t taille)
{
}

int main(int argc, char **argv) {
    uint32_t entiers[25] = {
        285762, 1287946, 260518, 702569, 183183, 1180, 909976, 1261857, 1665545, 1888537,
        1741007, 200924, 1659988, 359942, 1009604, 909891, 1261628, 317651, 822956, 843816,
        689772, 1894228, 648054, 198750, 1409020
    };
    uint32_t nombre_partitions = calcul_nombre_partitions(entiers, 25);
    printf("nombre de partitions: %d\n", nombre_partitions);
}
