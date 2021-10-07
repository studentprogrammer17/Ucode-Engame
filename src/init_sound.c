#include "header.h"

const char * init_sound()
{
    int choice = rand() % 9;
    const char *name = NULL;
    switch(choice){
        case 0: name = "./resource/sounds/load/sound.wav"; break;
        case 1: name = "./resource/sounds/load/sound1.wav"; break;
        case 2: name = "./resource/sounds/load/sound2.wav"; break;
        case 3: name = "./resource/sounds/load/sound3.wav"; break;
        case 4: name = "./resource/sounds/load/sound4.wav"; break;
        case 5: name = "./resource/sounds/load/sound5.wav"; break;
        case 6: name = "./resource/sounds/load/sound6.wav"; break;
        case 7: name = "./resource/sounds/load/sound7.wav"; break;
        case 8: name = "./resource/sounds/load/sound8.wav"; break;
    }  
    return name;
}




