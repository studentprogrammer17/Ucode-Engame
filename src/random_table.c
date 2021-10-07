#include "header.h"
void random_table(SDL_Rect TableRect, SDL_Renderer *renderer) 
{
    SDL_Texture* TableTexture1 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem1.png");//billy 
    SDL_Texture* TableTexture2 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem2.png");//jojo
    SDL_Texture* TableTexture3 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem3.png");//jak fresko
    SDL_Texture* TableTexture4 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem4.png");//anonimus
    SDL_Texture* TableTexture5 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem5.png");//jotarobilly
    SDL_Texture* TableTexture6 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem6.png");//matiz
    SDL_Texture* TableTexture7 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem7.png");//pasha
    SDL_Texture* TableTexture8 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem8.png");//postirony
    SDL_Texture* TableTexture9 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem9.png");//stethem
    SDL_Texture* TableTexture10 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem10.png");//shlepa
    SDL_Texture* TableTexture11 = IMG_LoadTexture(renderer, "./resource/Textures/Table/Imac.png");//empty
    int random = rand() % 11;
    switch(random)
    {
        case 0: CopyTexture(renderer, TableTexture1, TableRect); break;
        case 1: CopyTexture(renderer, TableTexture2, TableRect); break;
        case 2: CopyTexture(renderer, TableTexture3,  TableRect); break;
        case 3: CopyTexture(renderer, TableTexture4,  TableRect); break;
        case 4: CopyTexture(renderer, TableTexture5,  TableRect); break;
        case 5: CopyTexture(renderer, TableTexture6,  TableRect); break;
        case 6: CopyTexture(renderer, TableTexture7,  TableRect); break;
        case 7: CopyTexture(renderer, TableTexture8,  TableRect); break;
        case 8: CopyTexture(renderer, TableTexture9,  TableRect); break;
        case 9: CopyTexture(renderer, TableTexture10, TableRect); break;
        case 10: CopyTexture(renderer, TableTexture11, TableRect); break;
    }
    SDL_DestroyTexture(TableTexture1);
    SDL_DestroyTexture(TableTexture2);
    SDL_DestroyTexture(TableTexture3);
    SDL_DestroyTexture(TableTexture4);
    SDL_DestroyTexture(TableTexture5);
    SDL_DestroyTexture(TableTexture6);
    SDL_DestroyTexture(TableTexture7);
    SDL_DestroyTexture(TableTexture8);
    SDL_DestroyTexture(TableTexture9);
    SDL_DestroyTexture(TableTexture10);
    SDL_DestroyTexture(TableTexture11);
}




