/*
Если вам что то не понятно в этом коде или в самой игре, то вы просто не выкупаете постиронию. 
Разрабы во время написания этого говнокода были под глицином и читали высказывания Фрека Жаско.
Кстати, кто такой .gitignore?
*/

#include "header.h"

int main(void)
{
    SDL_Init(SDL_INIT_EVERYTHING);
     
    // Init SDL video and audio
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    // Init SDL mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    TTF_Init();

    //Set Cursor
    SDL_Surface* cursor_image = SDL_LoadBMP("./resource/images/cursor.bmp");
    SDL_Cursor* cursor = SDL_CreateColorCursor(cursor_image, 7, 7);
    SDL_SetCursor(cursor);

    SDL_Window* window = SDL_CreateWindow("The Secrets of Campus", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT,0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);

    int choice = 0;
    bool quit = false;
    choice = menu(renderer);
    while(!quit) {
        switch(choice) {
            case 1:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = start_lvl_one(renderer);
                break;
            case 2:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = start_lvl_two(renderer);
                break;
            case 3:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = start_lvl_three(renderer);
                break;
            case 4:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = start_lvl_four(renderer);
                break;
            case 5:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = about(renderer);
                break;
            case -1:
                SDL_ShowCursor(SDL_ENABLE);
                loading(renderer);
                choice = menu(renderer);
                break;
            case 0:
                quit = true;
                break;
        }
    }
    Mix_CloseAudio();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
    return 0;
}







