#include "header.h"

const char * init_bg()
{
    int choice = rand() % 9;
    const char *name = NULL;
    switch(choice){
        case 0: name = "./resource/images/load/image1.png"; break;
        case 1: name = "./resource/images/load/image2.png"; break;
        case 2: name = "./resource/images/load/image3.png"; break;
        case 3: name = "./resource/images/load/image4.png"; break;
        case 4: name = "./resource/images/load/image5.png"; break;
        case 5: name = "./resource/images/load/image6.png"; break;
        case 6: name = "./resource/images/load/image7.png"; break;
        case 7: name = "./resource/images/load/image8.png"; break;
        case 8: name = "./resource/images/load/image9.png"; break;
    }  
    return name;
}






