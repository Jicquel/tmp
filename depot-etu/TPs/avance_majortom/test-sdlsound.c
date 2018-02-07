/*
  Enonce :

  L'objectif de manipuler des fichiers sons via la librairie SDL.
  Cf. majortom.pdf pour les explications detaillees des algorithmes a utiliser.
  Un fichier sdlsound.o et un fichier sdlsound.h sont fournis avec des fonctions de base
  pour recuperer des sons et les jouer.
  
  NOTA BENE :

  - Les librairies SDL 1.2 et SDL_sound 1.x sont prerequises ;
  - Ces librairies sont installees sur les PC Ensimag (salles de TP et
    PC Virtuel ;
  - L'utilisation d'un casque son est necessaire pour cet exercice
    pour verifier les resultats ;

  Directives de codage : 

  1 - Completer le Makefile fourni pour generer le premier programme
  fourni test-sdlsound Vous devriez entendre 3 extraits musicaux

  2 - Realiser les fonctions du module fonctions.c, dans l'ordre :  
  - max_char et max_tab_char
  - sur_echantillonnage (tester pour verifier que vous avez encore un son audible)
  - mixage_meme_frequence (testable avec 2 sons de meme frequence)
  - mixage (a tester avec les sons fournis de frequences differentes mais proportionnelles)

  3 - Completer main pour tester la fonction de mixage ;

  4 - Utiliser autant que possible quand c'est judicieux l'operateur
  conditionnel '?'

  5 - Pour le traitement des quelques chaines de caracteres (nom des
     sons), utiliser le traitement caractere par caractere (pour
     eviter d'avoir a requerir aux fonctions avancees)

  Competences : 7,8,9,10,20,27,32,36,38,71,79,88,89,91,92,94,96
  Difficulte : 3
*/

/* Test lib son SDL */

#include <stdlib.h>
#include "sdlsound.h"
#include "fonctions.h"

int main(void)
{
    struct audio *audio1, *audio2, *audio3, *mix;;
    audio1 = audio2 = audio3 = mix = NULL;

    audio1 = get_audio_wav("david-bowie-major-tom-extrait01-11025.wav");
    print_audio_specs(*audio1);
    play_audio(audio1);

    audio2 = get_audio_wav("david-bowie-china-girl-extrait01-22050.wav");
    print_audio_specs(*audio2);
    play_audio(audio2);
    
    audio3 = get_audio_wav("david-bowie-lets-dance-extrait01-44100.wav");
    print_audio_specs(*audio3);
    play_audio(audio3);

    /*  Mixer audio1 et audio2 et mettre le resultat dans mix
        Puis mixer audio1 et audio 3 et mettre le resultat dans mix 
        Puis mixer audio3 et audio 2 et mettre le resultat dans mix 
        Apres chaque mixage, afficher les caracteristiques du son mix via la fonction print_audio_specs
        et bien sur jouer le son mix pour verifier votre mixage
        Penser a liberer la memoire quand c'est necessaire et en fin de main egalement
    */
    return EXIT_SUCCESS;
}
