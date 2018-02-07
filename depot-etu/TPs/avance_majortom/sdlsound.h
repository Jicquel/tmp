#ifndef _SDLSOUND_H_
#define _SDLSOUND_H_

/* SDL audio - lib Ensimag */

#include <stdint.h>

/* Structure de representation d'un son */
struct audio {
    char            *name;      // Nom du son
    uint8_t         *data;      // Tableau des echantillons du son
    uint32_t        frequency;  // Frequence du son
    uint32_t        length;     // Nombre d'elements du tableau data
};

struct audio *get_audio_wav(char* filename);
void free_audio(struct audio *audio);
void play_audio(struct audio *audio);
void print_audio_specs(struct audio audio);
 
#endif /* _SDLSOUND_H_ */
