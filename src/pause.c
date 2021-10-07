#include "header.h"

int pause_game(SDL_Renderer *renderer, int lvl)
{
    //Background
    SDL_Texture* bg_pauseImage = IMG_LoadTexture(renderer, "./resource/images/bg/pause_menu.png");
    SDL_Rect background = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT };

    //BackgroundMusic
    Mix_Music *pauseSound = Mix_LoadMUS("./resource/music/bg_pause.mp3");
    Mix_PlayMusic(pauseSound, -1);
    Mix_VolumeMusic(128);
    //Sounds
    Mix_Chunk *mouse_click = Mix_LoadWAV("./resource/sounds/mouse_click.wav"); 
    Mix_Chunk *mouse_click_finish = Mix_LoadWAV("./resource/sounds/mouse_click_finish.wav"); 
    Mix_Chunk *mouse_click_play = Mix_LoadWAV("./resource/sounds/mouse_click_play.wav");  

    // Buttons
    SDL_Texture* continueTexture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button_M.png");
    SDL_Rect continueRect = {MENU_BUTTON_X, MENU_BUTTON_Y + 300, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* menuTexture = IMG_LoadTexture(renderer, "./resource/images/buttons/continue_button.png");
    SDL_Rect menuRect = {MENU_BUTTON_X, MENU_BUTTON_Y + 500, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Event event;
    bool pause = true;
    while(pause)
    {
        SDL_RenderCopy(renderer, bg_pauseImage, NULL, &background);
        SDL_RenderCopy(renderer, continueTexture, NULL, &continueRect);
        SDL_RenderCopy(renderer, menuTexture, NULL, &menuRect);

         while (SDL_PollEvent(&event)) {
            switch (event.type)
            {
                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 300 && event.button.y <= MENU_BUTTON_Y + 300 + MENU_BUTTON_Y - 200) //Menu
                    {
                        Mix_PlayChannel(-1, mouse_click_finish, 0);
                        pause = false;
                        lvl = -1;
                        SDL_DestroyTexture(menuTexture);
                        SDL_DestroyTexture(bg_pauseImage);
                        Mix_FreeMusic(pauseSound);
                        SDL_RenderPresent(renderer);
                        SDL_Delay(1000/120);
                        SDL_RenderClear(renderer); 
                        return lvl;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 300 && event.button.y <= MENU_BUTTON_Y + 500 + MENU_BUTTON_Y - 200)  //Continue
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        pause = false;
                        SDL_DestroyTexture(continueTexture);
                        SDL_DestroyTexture(menuTexture);
                        SDL_DestroyTexture(bg_pauseImage);
                        Mix_FreeMusic(pauseSound);
                        SDL_RenderPresent(renderer);
                        SDL_Delay(1000/120);
                        SDL_RenderClear(renderer); 
                        return lvl;
                    }
                    else
                    {
                        Mix_PlayChannel(-1, mouse_click, 0);
                    }
                    SDL_Delay(100);
                break;
            }
        }
        SDL_RenderPresent(renderer);
        SDL_Delay(1000/120);
        SDL_RenderClear(renderer); 
    }
    
    SDL_DestroyTexture(continueTexture);
    SDL_DestroyTexture(menuTexture);
    SDL_DestroyTexture(bg_pauseImage);
    Mix_FreeMusic(pauseSound);
    return lvl;
}





