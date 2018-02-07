/*
Enonce :

C'est un exercice de comprehension de code, vous n'avez rien a
ajouter a ce programme, il fonctionne deja comme il faut! Par
contre, on vous demande de comprendre ce qu'il fait.

Vous pouvez bien sur le compiler et le lancer pour voir ce qu'il
produit (c'etait votre premier reflexe, pas vrai?). Par contre, son
temps d'execution est un peu long, ce qui vous laisse du temps pour
lire et demystifier le code ci-dessous...

Competences : 113
Difficulte : 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int64_t f(int64_t n){
    int64_t x,y;
    if(n < 2){
        return n;
    }
    x=f(n-1);
    y=f(n-2);
    return x+y;
}

int main(void){
    int64_t z=42+1;
    printf("%ld\n",f(z));
    return 0;
}

