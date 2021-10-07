#include "header.h"
int start_lvl_desert(SDL_Renderer *renderer)
{
    //Background
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_desert.png");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Floor
    SDL_Texture* FloorTexture = IMG_LoadTexture(renderer, "./resource/textures/Floor/desert_floor.png");
    SDL_Rect FloorRect = {0, WINDOW_HEIGHT - FLOOR_HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT};

    SDL_Texture* Water_Pyramid_Texture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Water_Pyramid.png"); 
    SDL_Rect Water_Pyramid_Rect = {WINDOW_WIDTH - 300, WINDOW_HEIGHT - 350, 250, 250};

    ////Cup
    SDL_Texture* mCupTexture = IMG_LoadTexture(renderer, "./resource/textures/Food/mCup.png");
    SDL_Texture* mCup_mouseTexture = IMG_LoadTexture(renderer, "./resource/textures/Food/mCup_mouse.png");
    SDL_Rect mCupInvRect1 = {92, 18, 50, 50};

    ////Inventory
    SDL_Texture* InventoryTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Inventory.png");
    SDL_Rect InventoryRect = {10, 10, 64, 64};
    SDL_Rect InventoryRect1 = {84, 10, 64, 64};

    ////Pils
    SDL_Texture* PilsTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Pils.png");
    SDL_Rect PilsInvRect = {18, 18, 50, 50};

    //Background Music
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/bg_desert.mp3");
    Mix_PlayMusic(backgroundSound, -1);
    Mix_VolumeMusic(72);

    ////Water
    SDL_Texture* Empty_WaterTexture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Empty_water.png");
    SDL_Texture* Water_notfullTexture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Water_notfull.png");
    SDL_Rect Water_notfullRect = {WINDOW_WIDTH - 450, WINDOW_HEIGHT - 330, 200, 300};

    //Sounds
    Mix_Chunk *Player_jump = Mix_LoadWAV("./resource/sounds/jump.wav"); 

    //Players
    SDL_Texture* Player_stand_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_right.png");
    SDL_Texture* Player_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right.png");
    SDL_Texture* Player2_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right1.png");
    SDL_Texture* Player3_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right2.png");
    SDL_Texture* Player_jump_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_jump_right.png");

    SDL_Texture* Player_stand_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_left.png");
    SDL_Texture* Player_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left.png");
    SDL_Texture* Player3_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left2.png");
    SDL_Texture* Player_jump_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_jump_left.png");
    
    //Text
    SDL_Texture* Dialogue_Artem_4Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue4.png");
    SDL_Texture* Dialogue_Artem_5Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue5.png");
    SDL_Texture* Dialogue_Artem_6Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue6.png");
    SDL_Texture* Dialogue_Artem_7Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue7.png");
    SDL_Texture* Dialogue_Artem_8Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue8.png");
    SDL_Texture* Dialogue_Artem_9Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue9.png");
    SDL_Texture* Dialogue_Artem_11Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue11.png");
    SDL_Texture* Dialogue_Artem_12Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue12.png");

    SDL_Texture* Dialogue_Ira_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Ira/Dialogue1.png");
    SDL_Texture* Dialogue_Ira_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Ira/Dialogue2.png");
    SDL_Texture* Dialogue_Ira_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Ira/Dialogue3.png");

    SDL_Rect DialogueRect = {10, WINDOW_HEIGHT - 400, 300, 75};


    SDL_Texture* IraTexture = IMG_LoadTexture(renderer, "./resource/images/players/Ira/Ira_sup_stand.png");
    SDL_Texture* Ira_ActiveTexture = IMG_LoadTexture(renderer, "./resource/images/players/Ira/Ira_sup_stand_mouse.png");
    SDL_Rect IraRect = {WINDOW_WIDTH - 550, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT, PLAYER_WIDTH, PLAYER_HEIGHT};
    //Events
    SDL_Event event; 

    //Main loop
    Uint32 ticks;
    Uint32 stand;
    bool game = true;
    int Player_x_pos = 10;
    int Player_Y_pos = 0;
    bool skip = false;
    bool direction = true; //false == left; true == right
    int x_m;
    int y_m;
    for(int i = 0; i < 3; i++)
    {
        SDL_Rect PlayerStandRect = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
        switch(i)
        {
            case 0: SDL_RenderCopy(renderer, Dialogue_Artem_4Texture, NULL, &DialogueRect); break;
            case 1: SDL_RenderCopy(renderer, Dialogue_Artem_5Texture, NULL, &DialogueRect); break;
            case 2: SDL_RenderCopy(renderer, Dialogue_Artem_6Texture, NULL, &DialogueRect); break;
        }
        SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
        SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
        SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
        SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
        SDL_RenderPresent(renderer);
        SDL_Delay(3000);
        SDL_RenderClear(renderer);
    }
    while (game) 
    {
        skip = false;
        //Ticks
        ticks = SDL_GetTicks();
        stand = (ticks / 300) % 5;

        SDL_Rect PlayerStandRect = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};

        //Render objects
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
        SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
        SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
        SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
        SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);

        mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
        if(x_m >= WINDOW_WIDTH - 550 && x_m <= WINDOW_WIDTH - 550 + PLAYER_WIDTH && y_m >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT && y_m <= WINDOW_HEIGHT - 90 ) 
        {
            if(Player_x_pos >= WINDOW_WIDTH - 650 && Player_x_pos <= WINDOW_WIDTH - 350 + PLAYER_WIDTH)
            {
                SDL_RenderCopy(renderer, Ira_ActiveTexture, NULL, &IraRect);   
            }
        }
        //Event listener
        while (SDL_PollEvent(&event)) 
        {
            switch (event.type) 
            {
                case SDL_QUIT:
                    game = false;
                    break;
                case SDL_KEYDOWN:
                    mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
                    switch(event.key.keysym.sym)
                    {                   
                        case SDLK_UP:   
                            Mix_PlayChannel(-1, Player_jump, 0);
                            while (Player_Y_pos > JUMP_HEIGHT) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
                                Player_Y_pos -= JUMP_STEP*2;
                                if (direction == false)
                                {
                                    if (Player_x_pos < 0)
                                    {
                                        Player_x_pos = 1;
                                    }
                                    else if (Player_x_pos > WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        Player_x_pos = WINDOW_WIDTH - PLAYER_WIDTH - 1;
                                    }
                                    else
                                    {
                                        Player_x_pos -= JUMP_STEP*1.5;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                else
                                {
                                    if (Player_x_pos < 0)
                                    {
                                        Player_x_pos = 1;
                                    }
                                    if (Player_x_pos > WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        Player_x_pos = WINDOW_WIDTH - PLAYER_WIDTH - 1;
                                    }
                                    else
                                    {
                                        Player_x_pos += JUMP_STEP*1.5;
                                    }
                                    SDL_Delay(1000/120);
                                }

                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
                                SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
                                SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);

                                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                                if(direction == false)
                                {
                                    if (Player_x_pos > 1)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                }
                                else
                                {
                                    if (Player_x_pos < WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    
                                }

                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }
                            while(Player_Y_pos < 0) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
                                Player_Y_pos += JUMP_STEP;
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
                                SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
                                SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                                if(direction == false)
                                {
                                    if (Player_x_pos > 1)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                }
                                else
                                {
                                    if (Player_x_pos < WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    
                                }
                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }      
                            skip = true;  
                            break;

                        case SDLK_SPACE:   
                            Mix_PlayChannel(-1, Player_jump, 0);
                            while (Player_Y_pos > JUMP_HEIGHT) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
                                Player_Y_pos -= JUMP_STEP*2;

                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
                                SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
                                SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                                if(direction == false)
                                {
                                    if (Player_x_pos > 1)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                }
                                else
                                {
                                    if (Player_x_pos < WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    
                                }

                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }
                            while(Player_Y_pos < 0) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
                                Player_Y_pos += JUMP_STEP;
                                
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
                                SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
                                SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                                if(direction == false)
                                {
                                    if (Player_x_pos > 1)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
                                    }
                                }
                                else
                                {
                                    if (Player_x_pos < WINDOW_WIDTH - PLAYER_WIDTH)
                                    {
                                        SDL_RenderCopy(renderer, Player_jump_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    else
                                    {
                                        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                                    }
                                    
                                }
                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }      
                            skip = true;  
                            break;

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
                case SDL_MOUSEMOTION:
                    x_m = event.motion.x;
                    y_m = event.motion.y;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= WINDOW_WIDTH - 550
                    && event.button.x <= WINDOW_WIDTH - 550 + PLAYER_WIDTH
                    && event.button.y >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= WINDOW_WIDTH - 650 && Player_x_pos <= WINDOW_WIDTH - 350 + PLAYER_WIDTH)
                        {
                            for(int i = 1, j = 0, k = 0; i < 5; i++)
                            {
                                SDL_Rect DialogueRect2 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
                                SDL_Rect DialogueRect3 = {10 + WINDOW_WIDTH - 550, WINDOW_HEIGHT - 400, 300, 75};
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
                                if( i % 2 != 0)
                                {
                                    switch(j)
                                    {
                                        case 0: SDL_RenderCopy(renderer, Dialogue_Artem_7Texture, NULL, &DialogueRect2); break;
                                        case 1: SDL_RenderCopy(renderer, Dialogue_Artem_8Texture, NULL, &DialogueRect2); break;
                                    }
                                    j++;
                                }
                                else
                                {
                                    switch(k)
                                    {
                                        case 0: SDL_RenderCopy(renderer, Dialogue_Ira_1Texture, NULL, &DialogueRect3); break;
                                        case 1: SDL_RenderCopy(renderer, Dialogue_Ira_3Texture, NULL, &DialogueRect3); break;
                                    }
                                    k++;
                                }
                                SDL_RenderCopy(renderer, Water_Pyramid_Texture, NULL, &Water_Pyramid_Rect);
                                SDL_RenderCopy(renderer, Water_notfullTexture, NULL, &Water_notfullRect);
                                SDL_RenderCopy(renderer, IraTexture, NULL, &IraRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                SDL_RenderPresent(renderer);
                                SDL_Delay(3000);
                                SDL_RenderClear(renderer);
                            }
                        }
                        return -1;
                    }
                    break;
            }
        }
        
        if(skip == true)
        {
            continue;
        }
                 
        SDL_RenderPresent(renderer);
        SDL_Delay(1000/120);
        SDL_RenderClear(renderer);
    }

    //Quit all SDL functions of this project
    Mix_FreeMusic(backgroundSound);
    SDL_DestroyTexture(FloorTexture);
    SDL_DestroyTexture(backgroundImage);

    SDL_DestroyTexture(Dialogue_Artem_4Texture);
    SDL_DestroyTexture(Dialogue_Artem_5Texture);
    SDL_DestroyTexture(Dialogue_Artem_6Texture);
    SDL_DestroyTexture(Dialogue_Artem_7Texture);
    SDL_DestroyTexture(Dialogue_Artem_8Texture);
    SDL_DestroyTexture(Dialogue_Artem_9Texture);
    SDL_DestroyTexture(Dialogue_Artem_11Texture);
    SDL_DestroyTexture(Dialogue_Artem_12Texture);
    SDL_DestroyTexture(Dialogue_Ira_1Texture);
    SDL_DestroyTexture(Dialogue_Ira_2Texture);
    SDL_DestroyTexture(Dialogue_Ira_3Texture); 
    SDL_DestroyTexture(mCupTexture);
    SDL_DestroyTexture(Water_Pyramid_Texture);
    SDL_DestroyTexture(mCup_mouseTexture);
    SDL_DestroyTexture(InventoryTexture);
    SDL_DestroyTexture(PilsTexture);
    SDL_DestroyTexture(Empty_WaterTexture);
    SDL_DestroyTexture(Water_notfullTexture);
    SDL_DestroyTexture(Player_stand_rightTexture);
    SDL_DestroyTexture(Player_run_rightTexture);
    SDL_DestroyTexture(Player2_run_rightTexture);
    SDL_DestroyTexture(Player3_run_rightTexture);
    SDL_DestroyTexture(Player_jump_rightTexture);
    SDL_DestroyTexture(Player_stand_leftTexture);
    SDL_DestroyTexture(Player_run_leftTexture);
    SDL_DestroyTexture(Player3_run_leftTexture);
    SDL_DestroyTexture(Player_jump_leftTexture);
    SDL_DestroyTexture(IraTexture);
    SDL_DestroyTexture(Ira_ActiveTexture);
    return -1;
}





