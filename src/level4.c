#include "header.h"
int start_lvl_four(SDL_Renderer *renderer)
{
    //Background
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_post.png");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Background Music
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/bg_post.mp3");  
    Mix_PlayMusic(backgroundSound, -1);
    //Events
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
    Mix_FreeMusic(backgroundSound);
    SDL_DestroyTexture(backgroundImage);
    return -1;
}






