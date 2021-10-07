#include "header.h"

int about(SDL_Renderer *renderer)
{
    //Font
    TTF_Font* FontBig = TTF_OpenFont("resource/fonts/PhageRoughKG.ttf", 84); 

    //Color
    SDL_Color black = {0, 0, 0, 255};

    //Background
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_about.png");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Background Music
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/about_bg_music.mp3");  
    Mix_PlayMusic(backgroundSound, -1);

    //Text
    SDL_Surface* titleSurface = TTF_RenderText_Solid(FontBig, "Game was created by", black);
    SDL_Texture* titleTexture = SDL_CreateTextureFromSurface(renderer, titleSurface); 
    SDL_Rect titleRect = {WINDOW_WIDTH - 1584, MENU_TITLE_Y, titleSurface->w, titleSurface->h}; 

    //Event
    SDL_Event event; 

    //Main loop
    Uint32 ticks;
    bool game = true;
    while (game) 
    {
        //Ticks
        ticks = SDL_GetTicks();

        //Render objects
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, titleTexture, NULL, &titleRect);

        //Event listener
        while (SDL_PollEvent(&event)) 
        {
            switch (event.type) 
            {
                case SDL_QUIT:
                    game = false;
                    break;
                    
                default:
                    switch (event.key.keysym.sym) 
                    {
                        case SDLK_p:
                            if(pause_game(renderer, 2) == -1)
                            {
                                return -1;
                            }
                            Mix_PlayMusic(backgroundSound, -1);
                            break;

                        case SDLK_ESCAPE:
                            if(pause_game(renderer, 2) == -1)
                            {
                                return -1;
                            }
                            Mix_PlayMusic(backgroundSound, -1);
                            break;
                    }
                break;
            }
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(5);
        SDL_RenderClear(renderer);
    }

    //Quit all SDL functions of this project
    SDL_FreeSurface(titleSurface);
    Mix_FreeMusic(backgroundSound);
    SDL_DestroyTexture(backgroundImage);
    
    return -1;
}





