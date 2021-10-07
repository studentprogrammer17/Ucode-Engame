#include "header.h"

void loading(SDL_Renderer *renderer)
{
    //Background
    SDL_Texture* loadingImageText = IMG_LoadTexture(renderer, init_bg());
    SDL_Rect loadingImageRect = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Sound
    Mix_Chunk *Sound = Mix_LoadWAV(init_sound()); 
    
    SDL_RenderCopy(renderer, loadingImageText, NULL, &loadingImageRect);
    Mix_PlayChannel(-1, Sound, 0);

    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_RenderClear(renderer);
    SDL_DestroyTexture(loadingImageText);
}






