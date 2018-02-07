/*
    Enonce :

    Cet exercice vous fera manipuler les operateurs d'incrementation et
    d'affectation composee. Le but du jeu est de retablir un affichage
    correct (au niveau du sens de l'histoire). Rien de bien complique a
    priori, alors pour corser un peu l'affaire, vous n'avez le droit
    d'inserer dans le code ci-dessous que les caracteres suivants :

      ++
      --
      +=
      *=
      /=
      2
      3
      5

    A noter que '+' tout seul ne fait pas partie de cette liste, et donc
    que vous ne pouvez pas ecrire age + 5. Bad luck!

    Competences : 31,39
    Difficulte : 1
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(void)
{
    uint8_t age = 25;

    printf("Le capitaine a %u ans.\n", age);
    printf("C'est son anniversaire! Il a maintenant %u ans.\n", age+=1);
    printf("5 ans plus tard, alors qu'il a %u ans, il tombe sur une potion de jouvence...\n", age+=5);
    age--;
    printf("Boire cette potion le fait rajeunir d'un an! Il a maintenant %u ans.\n", age);
    printf("Il s'est mis a chercher d'autres potions de ce type, mais s'est arrete quand il a eu le double de l'age qu'il avait juste apres avoir bu la premiere potion.\n");
    printf("Ca lui fait quel age maintenant? Ah oui! %u ans.\n", age*=2);
    printf("Il commence a se faire vieux, et regrette le temps ou il avait le tiers de son age.\n");
    printf("Un temps que les moins de 2 fois %u ans ne peuvent pas connaitre.\n", age/=2);

    return EXIT_SUCCESS;
}
