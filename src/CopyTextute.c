#include "header.h"
//Render func
void CopyTexture(SDL_Renderer *renderer, SDL_Texture* Texture, SDL_Rect Rect) 
{
    SDL_RenderCopy(renderer, Texture, NULL, &Rect);
}






