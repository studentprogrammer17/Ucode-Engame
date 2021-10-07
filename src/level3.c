#include "header.h"
int start_lvl_three(SDL_Renderer *renderer)
{
    //Background 
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_kitchen.jpg");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Background Music
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/Menu.mp3");
    
    Mix_PlayMusic(backgroundSound, -1);
    Mix_VolumeMusic(32);

    //Sounds
    Mix_Chunk *Player_jump = Mix_LoadWAV("./resource/sounds/jump.wav"); 

    //Textures
    SDL_Texture* FloorTexture = IMG_LoadTexture(renderer, "./resource/textures/Floor/cement_floor.png");
    SDL_Rect FloorRect = {0, WINDOW_HEIGHT - FLOOR_HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT};
    ////cup
    SDL_Texture* mCupTexture = IMG_LoadTexture(renderer, "./resource/textures/Food/mCup.png");
    SDL_Texture* mCup_mouseTexture = IMG_LoadTexture(renderer, "./resource/textures/Food/mCup_mouse.png");
    SDL_Rect mCupRect = {WINDOW_WIDTH - 800, WINDOW_HEIGHT - 220, 45, 45};
    SDL_Rect mCupInvRect = {18, 18, 50, 50};
    SDL_Rect mCupInvRect1 = {92, 18, 50, 50};
    ////Kitchen
    SDL_Texture* KitchenTexture = IMG_LoadTexture(renderer, "./resource/Textures/Kitchen/Kitchen.png");
    SDL_Rect KitchenRect = {WINDOW_WIDTH - 380, WINDOW_HEIGHT - 500, 350, 550};

    ////Texts
    SDL_Texture* Dialogue_Artem_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue1.png");
    SDL_Texture* Dialogue_Artem_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue2.png");
    SDL_Texture* Dialogue_Artem_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue3.png");
    SDL_Texture* Dialogue_Artem_10Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue10.png");
    SDL_Texture* Dialogue_Artem_13Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue13.png");
    SDL_Texture* Dialogue_Artem_14Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level3/Artem/Dialogue14.png");
    
    SDL_Rect DialogueRect = {10, WINDOW_HEIGHT - 400, 300, 75};

    SDL_Texture* Hint_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint1.png");
    SDL_Texture* Hint_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint2.png");
    SDL_Texture* Hint_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint3.png");
    SDL_Rect HintRect = {1250, WINDOW_HEIGHT - 400, 250, 75};
    ////Microwave
    SDL_Texture* Microwave_brokenTexture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_broken.png");
    SDL_Rect MicrowaveRect = {WINDOW_WIDTH - 330, WINDOW_HEIGHT - 330, 90, 90};

    ////Water
    SDL_Texture* Empty_WaterTexture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Empty_water.png");
    SDL_Rect WaterRect = {WINDOW_WIDTH - 450, WINDOW_HEIGHT - 330, 200, 300};
    SDL_Rect WaterRect1 = {WINDOW_WIDTH - 520, WINDOW_HEIGHT - 330, 200, 300};

    SDL_Texture* MedicalTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Medical.png");
    SDL_Texture* Medical_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Medical_mouse.png");
    SDL_Rect MedicalRect = {215, WINDOW_HEIGHT - 190, 64, 64};

    ////Tabel
    SDL_Texture* TableTexture = IMG_LoadTexture(renderer, "./resource/Textures/Table/Table.png");
    SDL_Rect TableRect = {WINDOW_WIDTH - 1800, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect1 = {WINDOW_WIDTH - WINDOW_WIDTH - 200, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect2 = {WINDOW_WIDTH - 1480, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect3 = {WINDOW_WIDTH - 1160, WINDOW_HEIGHT - 550, 700, 700};
    //glicyn
    SDL_Texture* PilsTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Pils.png");
    SDL_Rect PilsInvRect = {18, 18, 50, 50};
    ////Inventory
    SDL_Texture* InventoryTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Inventory.png");
    SDL_Rect InventoryRect = {10, 10, 64, 64};
    SDL_Rect InventoryRect1 = {84, 10, 64, 64};

    //Players
    SDL_Texture* Player_stand_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_right.png");
    SDL_Texture* Player_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right.png");
    SDL_Texture* Player2_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right1.png");
    SDL_Texture* Player3_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right2.png");
    SDL_Texture* Player_jump_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_jump_right.png");

    SDL_Texture* Player_stand_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_left.png");
    SDL_Texture* Player_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left.png");
    SDL_Texture* Player2_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left1.png");
    SDL_Texture* Player3_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left2.png");
    SDL_Texture* Player_jump_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_jump_left.png");

    SDL_Texture* PashaTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_sup_stay.png");
    SDL_Texture* Pasha_ActiveTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_sup_stay_mouse.png");
    SDL_Rect PashaRect = {1300, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT, PLAYER_WIDTH, PLAYER_HEIGHT};
    //SDL_Texture* Water_Pyramid_Texture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Water_Pyramid.png"); 
    //SDL_Rect Water_Pyramid_Rect = {WINDOW_WIDTH, WINDOW_HEIGHT, 150, 150};
    //Events
    SDL_Event event; 

    //Game events
    bool cup = false;
    bool pils = false;
    bool dialog1 = false;
    //Main loop
    Uint32 ticks;
    Uint32 stand;
    bool game = true;
    int Player_x_pos = 60;
    int Player_Y_pos = 0;
    bool skip = false;
    bool direction = true; //false == left; true == right
    int x_m;
    int y_m;
    SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
    SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
    SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
    SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
    SDL_RenderCopy(renderer, Dialogue_Artem_1Texture, NULL, &DialogueRect);
    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
    SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
    SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
    SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
    SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
    SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
    SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
    SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
    SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
    SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
    SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_RenderClear(renderer); 
    while (game) 
    {
        skip = false;
        //Ticks
        ticks = SDL_GetTicks();
        stand = (ticks / 300) % 5;

        //
        SDL_Rect PlayerStandRect = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};

        //Render objects
        if(Player_x_pos >= WINDOW_WIDTH - 620 && Player_x_pos <= WINDOW_WIDTH - 450 + 300 && dialog1 == false)
        {
            SDL_RenderClear(renderer); 
            SDL_Rect DialogueRect1 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
            SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
            SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
            SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
            SDL_RenderCopy(renderer, Dialogue_Artem_2Texture, NULL, &DialogueRect1);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
            SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
            SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
            SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
            SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
            SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
            SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
            SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
            if((pils == false) && (cup == false))
            {
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            }
            else if(pils == true && cup == false)
            {
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
            }
            else if(pils == false && cup == true)
            {
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
            }
            else if(pils == true && cup == true)
            {
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
            }
            SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
            SDL_RenderPresent(renderer);
            SDL_Delay(3000);
            SDL_RenderCopy(renderer, Dialogue_Artem_3Texture, NULL, &DialogueRect1);
            SDL_RenderPresent(renderer);
            SDL_Delay(3000);
            SDL_RenderClear(renderer); 
            dialog1 = true;
        }
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
        SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
        //Inventory Render
        if((pils == false) && (cup == false))
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        }
        else if(pils == true && cup == false)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
        }
        else if(pils == false && cup == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
        }
        else if(pils == true && cup == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
            SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
        }
        SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
        SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
        SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
        SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
        if(pils == false)
        {
            SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
        }
        if(cup == false)
        {
            SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
        }
        SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
        SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect); 
        if(x_m >= 1300 && x_m <= 1300 + PLAYER_WIDTH && y_m >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT && y_m <= WINDOW_HEIGHT - 90 ) 
        {
            if(Player_x_pos >= 1000 && Player_x_pos <= WINDOW_WIDTH - 200)
            {
                SDL_RenderCopy(renderer, Pasha_ActiveTexture, NULL, &PashaRect);   
            }
        }
        else if(x_m >= 215 && x_m <= 279 && y_m >= WINDOW_HEIGHT - 190 && y_m <= WINDOW_HEIGHT - 126 ) 
        {
            if(Player_x_pos >= 100 && Player_x_pos <= 400 && pils == false)
            {
                SDL_RenderCopy(renderer, Medical_mouseTexture, NULL, &MedicalRect);   
            }
        }
        else if(x_m >= WINDOW_WIDTH - 800 && x_m <= WINDOW_WIDTH - 800 + 45 && y_m >= WINDOW_HEIGHT - 220 && y_m <= WINDOW_HEIGHT - 180 ) 
        {
            if(Player_x_pos >= WINDOW_WIDTH - 1000 && Player_x_pos <= WINDOW_WIDTH - 600 + 45 && cup == false)
            {
                SDL_RenderCopy(renderer, mCup_mouseTexture, NULL, &mCupRect);   
            }
        }
        mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 0);
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
                                        if(cup == true && pils == true)
                                        {
                                            return start_lvl_desert(renderer);
                                        }
                                        else
                                        {
                                            Player_x_pos = 1;
                                        }
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
                                        if(cup == true && pils == true)
                                        {
                                            return start_lvl_desert(renderer);
                                        }
                                        else
                                        {
                                            Player_x_pos = 1;
                                        }
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
                                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                                SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                if((pils == false) && (cup == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(pils == true && cup == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                }
                                else if(pils == false && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
                                }
                                else if(pils == true && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                }
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                                if(pils == false)
                                {
                                    SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
                                }
                                if(cup == false)
                                {
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
                                }

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
                                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                                SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                if((pils == false) && (cup == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(pils == true && cup == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                }
                                else if(pils == false && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
                                }
                                else if(pils == true && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                }
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                                if(pils == false)
                                {
                                    SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
                                }
                                if(cup == false)
                                {
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
                                }

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
                                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                                SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                if((pils == false) && (cup == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(pils == true && cup == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                }
                                else if(pils == false && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
                                }
                                else if(pils == true && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                }
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                                if(pils == false)
                                {
                                    SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
                                }
                                if(cup == false)
                                {
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
                                }
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
                                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                                SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                if((pils == false) && (cup == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(pils == true && cup == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                }
                                else if(pils == false && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect);
                                }
                                else if(pils == true && cup == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, PilsTexture, NULL, &PilsInvRect);
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupInvRect1);
                                }
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                                if(pils == false)
                                {
                                    SDL_RenderCopy(renderer, MedicalTexture, NULL, &MedicalRect);
                                }
                                if(cup == false)
                                {
                                    SDL_RenderCopy(renderer, mCupTexture, NULL, &mCupRect);
                                }

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
                    && event.button.x >= 1300
                    && event.button.x <= 1300 + PLAYER_WIDTH
                    && event.button.y >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= 1000 && Player_x_pos <= WINDOW_WIDTH - 200)
                        {
                            int choice = rand() % 3;
                            switch(choice){
                                case 0: SDL_RenderCopy(renderer, Hint_1Texture, NULL, &HintRect); ; break;
                                case 1: SDL_RenderCopy(renderer, Hint_2Texture, NULL, &HintRect); ; break;
                                case 2: SDL_RenderCopy(renderer, Hint_3Texture, NULL, &HintRect); ; break;
                            }  
                            SDL_RenderPresent(renderer);
                            SDL_Delay(1000);
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 215
                    && event.button.x <= 279
                    && event.button.y >= WINDOW_HEIGHT - 190
                    && event.button.y <= WINDOW_HEIGHT - 126) 
                    {
                        if(Player_x_pos >= 100 && Player_x_pos <= 400 && pils == false)
                        {
                            pils = true;
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= WINDOW_WIDTH - 800
                    && event.button.x <= WINDOW_WIDTH - 800 + 45
                    && event.button.y >= WINDOW_HEIGHT - 220
                    && event.button.y <= WINDOW_HEIGHT - 180) 
                    {
                        if(Player_x_pos >= WINDOW_WIDTH - 1000 && Player_x_pos <= WINDOW_WIDTH - 600 + 45 && cup == false)
                        {
                            cup = true;
                        }
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

    SDL_DestroyTexture(KitchenTexture);

    SDL_DestroyTexture(Microwave_brokenTexture);
    SDL_DestroyTexture(TableTexture);

    SDL_DestroyTexture(InventoryTexture);

    SDL_DestroyTexture(Empty_WaterTexture);
    
    SDL_DestroyTexture(Player_stand_rightTexture);
    SDL_DestroyTexture(Player2_run_rightTexture);
    SDL_DestroyTexture(Player3_run_rightTexture);
    SDL_DestroyTexture(Player_run_rightTexture);
    SDL_DestroyTexture(Player_jump_rightTexture);

    SDL_DestroyTexture(Player_stand_leftTexture);
    SDL_DestroyTexture(Player2_run_leftTexture);
    SDL_DestroyTexture(Player3_run_leftTexture);
    SDL_DestroyTexture(Player_run_leftTexture);
    SDL_DestroyTexture(Player_jump_leftTexture);

    SDL_DestroyTexture(Hint_1Texture);
    SDL_DestroyTexture(Hint_2Texture);
    SDL_DestroyTexture(Hint_3Texture);

    SDL_DestroyTexture(PashaTexture);
    SDL_DestroyTexture(Pasha_ActiveTexture);

    SDL_DestroyTexture(backgroundImage);


    SDL_DestroyTexture(Dialogue_Artem_1Texture);
    SDL_DestroyTexture(Dialogue_Artem_2Texture);
    SDL_DestroyTexture(Dialogue_Artem_3Texture);
    SDL_DestroyTexture(Dialogue_Artem_10Texture);
    SDL_DestroyTexture(Dialogue_Artem_13Texture);
    SDL_DestroyTexture(Dialogue_Artem_14Texture);

    return -1;
}




