/*
  Enonce :

  Cet exercice traite de la compilation d'un programme qui utilise une
  bibliotheque externe. Le but du jeu est d'ecrire le Makefile qui
  permet de generer un executable a partir du fichier de test main.c
  et du module dessin, implemente dans dessin.c, le tout sans toucher
  aux fichiers source fournis.

  Pour generer l'executable main, vous aurez besoin des fichiers
  objets main.o et dessin.o, et de lier ces .o avec les bibliotheques
  SDL et m (pour les fonctions mathematiques).

  Pour generer main.o et dessin.o, vous aurez besoin de specifier
  l'emplacement de l'en-tete SDL.h sur votre systeme. A l'ensimag, les
  fichiers en-tete de la bibliotheque SDL sont installes dans le
  repertoire /usr/include/SDL.

  Competences : 7,8,9,11,12
  Difficulte : 2
*/

#include <math.h>
#include <stdbool.h>
#include <SDL.h>

#include "dessin.h"


int main(void)
{
     static const int width = 640;
     static const int height = 480;
     static const int max_radius = 64;

     if (SDL_Init(SDL_INIT_VIDEO) != 0) {
          return 1;
     }

     atexit(SDL_Quit);

     SDL_Surface *screen = SDL_SetVideoMode(width, height, 0, SDL_DOUBLEBUF);

     if (screen == NULL)
          return 2;

     bool loop = true;
     while(loop) {
          int x = rand() % (width - 4) + 2;
          int y = rand() % (height - 4) + 2;
          int r = rand() % (max_radius - 10) + 10;
          int c = ((rand() % 0xff) << 16) +
               ((rand() % 0xff) << 8) +
               (rand() % 0xff);

          if (r >= 4) {
               if (x < r + 2) {
                    x = r + 2;
               } else if (x > width - r - 2) {
                    x = width - r - 2;
               }

               if (y < r + 2) {
                    y = r + 2;
               } else if (y > height - r - 2) {
                    y = height - r - 2;
               }
          }

          SDL_LockSurface(screen);

          fill_circle(screen, x, y, r, 0xff000000 + c);
          draw_circle(screen, x, y, r, 0xffffffff);

          SDL_FreeSurface(screen);

          SDL_Flip(screen);
          /* verifie si la fenetre a ete fermee */
          SDL_Event event;
          while(SDL_PollEvent(&event)) {
               if(event.type == SDL_QUIT)
                    loop = false;
          }
     }

     SDL_Quit();

     return 0;
}
