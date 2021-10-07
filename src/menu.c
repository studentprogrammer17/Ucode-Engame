#include "header.h"

int menu(SDL_Renderer *renderer){
    //Colors
    SDL_Color black = {0, 0, 0, 255};

    //Background
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_campus.png");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT };

    //BackgroundMusic
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/Menu.mp3");
    Mix_PlayMusic(backgroundSound, -1);

    //Sounds
    Mix_Chunk *mouse_click = Mix_LoadWAV("./resource/sounds/mouse_click.wav"); 
    Mix_Chunk *mouse_click_finish = Mix_LoadWAV("./resource/sounds/mouse_click_finish.wav"); 
    Mix_Chunk *mouse_click_play = Mix_LoadWAV("./resource/sounds/mouse_click_play.wav");  
    
    //Making a font
    TTF_Font* FontBig = TTF_OpenFont("resource/fonts/PhageRoughKG.ttf", 84); 
    //TTF_Font* FontSmall = TTF_OpenFont("resource/fonts/PhageRoughKG.ttf", 32);

    //Text
    SDL_Surface* titleSurface = TTF_RenderText_Solid(FontBig, "The Secrets of Campus", black);
    SDL_Texture* titleTexture = SDL_CreateTextureFromSurface(renderer, titleSurface); 
    SDL_Rect titleRect = {WINDOW_WIDTH - 1584, MENU_TITLE_Y, titleSurface->w, titleSurface->h}; 

    //Buttons
    SDL_Texture* Level1Texture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button1.png");
    SDL_Rect Level1Rect = {MENU_BUTTON_X, MENU_BUTTON_Y, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* Level2Texture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button2.png");
    SDL_Rect Level2Rect = {MENU_BUTTON_X, MENU_BUTTON_Y + 150, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* Level3Texture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button3.png");
    SDL_Rect Level3Rect = {MENU_BUTTON_X, MENU_BUTTON_Y + 300, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* Level4Texture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button4.png");
    SDL_Rect Level4Rect = {MENU_BUTTON_X, MENU_BUTTON_Y + 450, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* ExitTexture = IMG_LoadTexture(renderer, "./resource/images/buttons/ButtonF.png");
    SDL_Rect ExitRect = {MENU_BUTTON_X, MENU_BUTTON_Y + 600, MENU_BUTTON_X + 400, MENU_BUTTON_Y - 200};

    SDL_Texture* AboutTexture = IMG_LoadTexture(renderer, "./resource/images/buttons/Button_A.png");
    SDL_Rect AboutRect = {WINDOW_WIDTH - 150, 0, MENU_BUTTON_X + 50, MENU_BUTTON_Y - 200};

    
    //Events
    SDL_Event event;  

    //Main loop
    int choice;
    bool menu = true;
    while (menu)
    {   
        //Render objects
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, titleTexture, NULL, &titleRect);
        SDL_RenderCopy(renderer, Level1Texture, NULL, &Level1Rect);
        SDL_RenderCopy(renderer, Level2Texture, NULL, &Level2Rect);
        SDL_RenderCopy(renderer, Level3Texture, NULL, &Level3Rect);
        SDL_RenderCopy(renderer, Level4Texture, NULL, &Level4Rect);
        SDL_RenderCopy(renderer, AboutTexture, NULL, &AboutRect);
        SDL_RenderCopy(renderer, ExitTexture, NULL, &ExitRect);

        //Event listener
        while (SDL_PollEvent(&event)) {
            switch (event.type)
            {
                case SDL_QUIT:
                    Mix_PlayChannel(-1, mouse_click_finish, 0);
                    SDL_Delay(300);
                    menu = false;
                    choice = 0;
                break;

                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 600 && event.button.y <= MENU_BUTTON_Y + 600 + MENU_BUTTON_Y - 200) 
                    {
                        Mix_PlayChannel(-1, mouse_click_finish, 0);
                        SDL_Delay(300);
                        choice = 0;
                        menu = false;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y && event.button.y <= MENU_BUTTON_Y + MENU_BUTTON_Y - 200) 
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        choice = 1;
                        menu = false;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 150 && event.button.y <= MENU_BUTTON_Y + 150 +MENU_BUTTON_Y - 200) 
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        choice = 2;
                        menu = false;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 300 && event.button.y <= MENU_BUTTON_Y + 300 + MENU_BUTTON_Y - 200) 
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        choice = 3;
                        menu = false;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && event.button.x >= MENU_BUTTON_X && event.button.x <= MENU_BUTTON_X + MENU_BUTTON_X + 400
                        && event.button.y >= MENU_BUTTON_Y + 450 && event.button.y <= MENU_BUTTON_Y + 450 + MENU_BUTTON_Y - 200) 
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        choice = 4;
                        menu = false;
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT && 
                    event.button.x >= WINDOW_WIDTH - MENU_BUTTON_X &&
                     event.button.x <= WINDOW_WIDTH + MENU_BUTTON_X - 150
                        && event.button.y >= 20 
                        && event.button.y <= MENU_BUTTON_Y - 220) 
                    {
                        Mix_PlayChannel(-1, mouse_click_play, 0);
                        choice = 5;
                        menu = false;
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
    }

    //Quit all SDL functions of this project
    SDL_FreeSurface(titleSurface);
    SDL_DestroyTexture(ExitTexture);
    SDL_DestroyTexture(Level1Texture);
    SDL_DestroyTexture(Level2Texture);
    SDL_DestroyTexture(Level3Texture);
    SDL_DestroyTexture(Level4Texture);
    SDL_DestroyTexture(AboutTexture);
    SDL_DestroyTexture(backgroundImage);
    Mix_FreeMusic(backgroundSound);

    return choice;
}




