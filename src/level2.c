#include "header.h"

int start_lvl_two(SDL_Renderer *renderer)
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
    Mix_Chunk *Microwave_done = Mix_LoadWAV("./resource/sounds/Microwave_done.wav"); 
    Mix_Chunk *Microwave_break = Mix_LoadWAV("./resource/sounds/Microwave_break.wav"); 
    Mix_Chunk *Oracle_UP = Mix_LoadWAV("./resource/sounds/Oracle_UP.wav"); 
    Mix_Chunk *Pick_up = Mix_LoadWAV("./resource/sounds/Pick_up.wav");
    Mix_Chunk *Pasha_lvl2 = Mix_LoadWAV("./resource/sounds/Pasha_lvl2.wav"); 
    //Textures очищено
    SDL_Texture* FloorTexture = IMG_LoadTexture(renderer, "./resource/textures/Floor/cement_floor.png");
    SDL_Rect FloorRect = {0, WINDOW_HEIGHT - FLOOR_HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT};

    ////Kitchen очищено
    SDL_Texture* KitchenTexture = IMG_LoadTexture(renderer, "./resource/Textures/Kitchen/Kitchen.png");
    SDL_Texture* Kitchen_ActiveTexture = IMG_LoadTexture(renderer, "./resource/Textures/Kitchen/Kitchen_mouse.png");
    SDL_Rect KitchenRect = {WINDOW_WIDTH - 380, WINDOW_HEIGHT - 500, 350, 550};

    ////Texts
    SDL_Texture* Dialogue_Artem_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue1.png");
    SDL_Texture* Dialogue_Artem_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue2.png");
    SDL_Texture* Dialogue_Artem_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue3.png");
    SDL_Texture* Dialogue_Artem_4Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue4.png");
    SDL_Texture* Dialogue_Artem_5Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue5.png");
    SDL_Texture* Dialogue_Artem_6Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Artem/Dialogue6.png");

    SDL_Texture* Dialogue_Pasha_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level2/Pasha/Dialogue1.png");
    SDL_Rect DialogueRect = {10, WINDOW_HEIGHT - 400, 300, 75};

    SDL_Texture* Hint_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint1.png");
    SDL_Texture* Hint_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint2.png");
    SDL_Texture* Hint_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Hints/Hint3.png");
    SDL_Rect HintRect = {1250, WINDOW_HEIGHT - 400, 250, 75};
    ////Microwave часть очищено
    SDL_Texture* MicrowaveTexture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave.png");
    SDL_Texture* Microwave_ActiveTexture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_mouse.png");
    SDL_Texture* Microwave_1Texture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_1.png");
    SDL_Texture* Microwave_2Texture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_2.png");
    SDL_Texture* Microwave_3Texture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_3.png");
    SDL_Texture* Microwave_brokenTexture = IMG_LoadTexture(renderer, "./resource/Textures/Microwave/Microwave_broken.png");
    SDL_Rect MicrowaveRect = {WINDOW_WIDTH - 330, WINDOW_HEIGHT - 330, 90, 90};

    ////Water очещено
    SDL_Texture* WaterTexture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Water.png");
    SDL_Texture* Empty_WaterTexture = IMG_LoadTexture(renderer, "./resource/Textures/Water/Empty_water.png");
    SDL_Rect WaterRect = {WINDOW_WIDTH - 450, WINDOW_HEIGHT - 330, 200, 300};
    SDL_Rect WaterRect1 = {WINDOW_WIDTH - 520, WINDOW_HEIGHT - 330, 200, 300};

    ////Sugar
    SDL_Texture* SugarTexture = IMG_LoadTexture(renderer, "./resource/Textures/Sugar/Sugar.png");
    SDL_Rect SugarInvRect = {18, 18, 50, 50};
    //SDL_Rect SugarInvRect1 = {92, 18, 50, 50};

    ////Toast
    SDL_Texture* ToastTexture = IMG_LoadTexture(renderer, "./resource/Textures/Toast/Toast.png");
    SDL_Texture* Toast_ActiveTexture = IMG_LoadTexture(renderer, "./resource/Textures/Toast/Toast_mouse.png");
    SDL_Texture* Burned_ToastTexture = IMG_LoadTexture(renderer, "./resource/Textures/Burned_Toast/Burned_Toast.png");
    SDL_Rect ToastInvRect = {18, 18, 50, 50};
    SDL_Rect ToastInvRect1 = {92, 18, 50, 50};
    SDL_Rect ToastRect = {60, WINDOW_HEIGHT - 120, 32, 32};

    ////Tabel
    SDL_Texture* TableTexture = IMG_LoadTexture(renderer, "./resource/Textures/Table/Table.png");
    SDL_Rect TableRect = {WINDOW_WIDTH - 1800, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect1 = {WINDOW_WIDTH - WINDOW_WIDTH - 200, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect2 = {WINDOW_WIDTH - 1480, WINDOW_HEIGHT - 550, 700, 700};
    SDL_Rect TableRect3 = {WINDOW_WIDTH - 1160, WINDOW_HEIGHT - 550, 700, 700};

    ////Inventory
    SDL_Texture* InventoryTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Inventory.png");
    SDL_Rect InventoryRect = {10, 10, 64, 64};
    SDL_Rect InventoryRect1 = {84, 10, 64, 64};

    //Players //очищено
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

    SDL_Texture* Oracle_1Texture = IMG_LoadTexture(renderer, "./resource/images/players/oracle/Player_1.png");
    SDL_Texture* Oracle_2Texture = IMG_LoadTexture(renderer, "./resource/images/players/oracle/Player_2.png");
    SDL_Texture* Oracle_3Texture = IMG_LoadTexture(renderer, "./resource/images/players/oracle/Player_3.png");
    SDL_Texture* Oracle_4Texture = IMG_LoadTexture(renderer, "./resource/images/players/oracle/Player_4.png");

    SDL_Texture* PashaTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_sup_stay.png");
    SDL_Texture* Pasha_ActiveTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_sup_stay_mouse.png");
    SDL_Rect PashaRect = {1300, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT, PLAYER_WIDTH, PLAYER_HEIGHT};

    //Events
    SDL_Event event; 

    //Game events
    bool Toast = false;
    bool Burned_Toast = false;
    bool Sugar = false;
    bool Microwave_Smoked = false;
    
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
        //Render objects
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);
        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
        SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
        SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
        switch(i)
        {
            case 0: SDL_RenderCopy(renderer, Dialogue_Artem_1Texture, NULL, &DialogueRect); break;
            case 1: SDL_RenderCopy(renderer, Dialogue_Artem_2Texture, NULL, &DialogueRect); break;
            case 2: SDL_RenderCopy(renderer, Dialogue_Artem_3Texture, NULL, &DialogueRect); break;
        }
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
        SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
        SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
        SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
        SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
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

        //
        SDL_Rect PlayerStandRect = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};

        //Render objects
        SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect);

        SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
        SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
        SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
        //Inventory Render
        if((Toast == false || Microwave_Smoked == true ) && Burned_Toast == false && (Sugar == false || Microwave_Smoked == true))
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        }
        else if(Toast == true && Burned_Toast == false && Sugar == false)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect);
        }
        else if(Toast == false && Burned_Toast == true && Sugar == false)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, Burned_ToastTexture, NULL, &ToastInvRect);
        }
        else if(Toast == false && Burned_Toast == false && Sugar == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
        }
        else if(Toast == true && Burned_Toast == false && Sugar == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
            SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect1);
        }

        SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
        if(Burned_Toast == true)
        {
            SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
        }
        else
        {
            SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
        }
        SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
        SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
        if(Toast == false && Burned_Toast == false)
        {
            SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
        }
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
        SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);

        //Active object checks and enabled
        if(x_m >= WINDOW_WIDTH - 215 - 50 && x_m <= WINDOW_WIDTH - 215 && y_m >= WINDOW_HEIGHT - 100 - 100 && y_m <= WINDOW_HEIGHT - 100) 
        {
            if(Player_x_pos >= WINDOW_WIDTH - 565 && Player_x_pos <= WINDOW_WIDTH)
            {
                if (Sugar == false && Burned_Toast == false)
                {
                    SDL_RenderCopy(renderer, Kitchen_ActiveTexture, NULL, &KitchenRect);
                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
                }
                else
                {
                    SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect); 
                }
            }
        }
        else if(x_m >= WINDOW_WIDTH - 240 - 80 && x_m <= WINDOW_WIDTH - 255 && y_m >= WINDOW_HEIGHT - 270 - 45 && y_m <= WINDOW_HEIGHT - 270) 
        {
            if(Sugar == true && Toast == true && Microwave_Smoked == false && Burned_Toast == false)
            {
                if(Player_x_pos >= WINDOW_WIDTH - 460 && Player_x_pos <= WINDOW_WIDTH - 100)
                {
                    SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                    SDL_RenderCopy(renderer, Microwave_ActiveTexture, NULL, &MicrowaveRect);
                }
            }
        }
        else if(x_m >= 45 && x_m <= 85 && y_m >= WINDOW_HEIGHT - 122 && y_m <= WINDOW_HEIGHT - 90) 
        {
            if(Player_x_pos >= 0 && Player_x_pos <= 100)
            {
                if (Toast == false)
                {
                    SDL_RenderCopy(renderer, Toast_ActiveTexture, NULL, &ToastRect);
                }       
            }
        }
        if(x_m >= 1300 && x_m <= 1300 + PLAYER_WIDTH && y_m >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT && y_m <= WINDOW_HEIGHT - 90 ) 
        {
            if(Player_x_pos >= 1000 && Player_x_pos <= WINDOW_WIDTH - 200)
            {
                SDL_RenderCopy(renderer, Pasha_ActiveTexture, NULL, &PashaRect);   
            }
        }
        if(Microwave_Smoked == true)
        {
            SDL_RenderClear(renderer); 
            for(int i = 0; i < 6; i++)
            {
                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                if(i == 0)
                {
                    SDL_RenderCopy(renderer, Microwave_1Texture, NULL, &MicrowaveRect);
                }
                else if(i == 1)
                {
                    SDL_RenderCopy(renderer, Microwave_2Texture, NULL, &MicrowaveRect);
                }
                else if(i == 2)
                {
                    SDL_RenderCopy(renderer, Microwave_3Texture, NULL, &MicrowaveRect);
                }
                else if(i == 3)
                {
                    SDL_RenderCopy(renderer, Microwave_1Texture, NULL, &MicrowaveRect);
                }
                else if(i == 4)
                {
                    SDL_RenderCopy(renderer, Microwave_2Texture, NULL, &MicrowaveRect);
                }
                else if(i == 5)
                {
                    SDL_RenderCopy(renderer, Microwave_3Texture, NULL, &MicrowaveRect);
                }
                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                SDL_RenderPresent(renderer);
                Mix_PlayChannel(-1, Microwave_break, 0);
                SDL_Delay(1000);
                SDL_RenderClear(renderer); 
            }
            Mix_PlayChannel(-1, Microwave_done, 0);
            for(int i = 0; i < 6; i++)
            {
                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                SDL_Rect OracleRect = {WINDOW_WIDTH - 360, WINDOW_HEIGHT - 500 - i * 150, PLAYER_WIDTH, PLAYER_HEIGHT};
                if(i == 0)
                {
                    SDL_RenderCopy(renderer, Oracle_1Texture, NULL, &OracleRect);
                }
                else if(i == 1)
                {
                    SDL_RenderCopy(renderer, Oracle_2Texture, NULL, &OracleRect);
                }
                else if(i == 2)
                {
                    SDL_RenderCopy(renderer, Oracle_3Texture, NULL, &OracleRect);
                }
                else if(i == 3)
                {
                    SDL_RenderCopy(renderer, Oracle_4Texture, NULL, &OracleRect);
                }
                else if(i == 4)
                {
                    SDL_RenderCopy(renderer, Oracle_1Texture, NULL, &OracleRect);
                }
                else if(i == 5)
                {
                    SDL_RenderCopy(renderer, Oracle_2Texture, NULL, &OracleRect);
                }
                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);
                SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                SDL_RenderCopy(renderer, Player_stand_rightTexture, NULL, &PlayerStandRect1);
                SDL_RenderPresent(renderer);
                Mix_PlayChannel(-1, Oracle_UP, 0);
                SDL_Delay(1000);
                SDL_RenderClear(renderer); 
            }
            
            Microwave_Smoked = false;
            Sugar = false;
            Toast = false;
            Burned_Toast = true;
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
                                SDL_RenderCopy(renderer, PashaTexture, NULL, &PashaRect);
                                SDL_RenderCopy(renderer, KitchenTexture, NULL, &KitchenRect);
                                if(Burned_Toast == true)
                                {
                                    SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
                                }
                                if((Toast == false || Microwave_Smoked == true ) && Burned_Toast == false && (Sugar == false || Microwave_Smoked == true))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == true && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, Burned_ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect1);
                                }
                                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                if(Toast == false && Burned_Toast == false)
                                {
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
                                }
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);

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
                                if(Burned_Toast == true)
                                {
                                    SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
                                }
                                if((Toast == false || Microwave_Smoked == true ) && Burned_Toast == false && (Sugar == false || Microwave_Smoked == true))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == true && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, Burned_ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect1);
                                }
                                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                if(Toast == false && Burned_Toast == false)
                                {
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
                                }
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);

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
                                if(Burned_Toast == true)
                                {
                                    SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
                                }
                                if((Toast == false || Microwave_Smoked == true ) && Burned_Toast == false && (Sugar == false || Microwave_Smoked == true))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == true && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, Burned_ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect1);
                                }
                                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                if(Toast == false && Burned_Toast == false)
                                {
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
                                }
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);

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
                                if(Burned_Toast == true)
                                {
                                    SDL_RenderCopy(renderer, Microwave_brokenTexture, NULL, &MicrowaveRect);
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, MicrowaveTexture, NULL, &MicrowaveRect);
                                }
                                if((Toast == false || Microwave_Smoked == true ) && Burned_Toast == false && (Sugar == false || Microwave_Smoked == true))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == true && Sugar == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, Burned_ToastTexture, NULL, &ToastInvRect);
                                }
                                else if(Toast == false && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                }
                                else if(Toast == true && Burned_Toast == false && Sugar == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, SugarTexture, NULL, &SugarInvRect);
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastInvRect1);
                                }
                                SDL_RenderCopy(renderer, WaterTexture, NULL, &WaterRect);
                                SDL_RenderCopy(renderer, Empty_WaterTexture, NULL, &WaterRect1);
                                if(Toast == false && Burned_Toast == false)
                                {
                                    SDL_RenderCopy(renderer, ToastTexture, NULL, &ToastRect);
                                }
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture, NULL, &TableRect3);

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
                    && event.button.x >= WINDOW_WIDTH - 265 
                    && event.button.x <= WINDOW_WIDTH - 215
                    && event.button.y >= WINDOW_HEIGHT - 200
                    && event.button.y <= WINDOW_HEIGHT - 100) 
                    {
                        if(Player_x_pos >= WINDOW_WIDTH - 565 && Player_x_pos <= WINDOW_WIDTH && Burned_Toast == false)
                        {
                            Sugar = true;
                            Mix_PlayChannel(-1, Pick_up, 0);
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 45
                    && event.button.x <= 85
                    && event.button.y >= WINDOW_HEIGHT - 122
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= 0 && Player_x_pos <= 100 && Burned_Toast == false)
                        {
                            Toast = true;
                            Mix_PlayChannel(-1, Pick_up, 0);
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= WINDOW_WIDTH - 320
                    && event.button.x <= WINDOW_WIDTH - 255
                    && event.button.y >= WINDOW_HEIGHT - 315
                    && event.button.y <= WINDOW_HEIGHT - 270) 
                    {
                        if(Sugar == true && Toast == true)
                        {
                            if(Player_x_pos >= WINDOW_WIDTH - 460 && Player_x_pos <= WINDOW_WIDTH - 100 && Burned_Toast == false)
                            {
                                Microwave_Smoked = true;
                            }
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 1300
                    && event.button.x <= 1300 + PLAYER_WIDTH
                    && event.button.y >= WINDOW_HEIGHT - 90 - PLAYER_HEIGHT
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= 1000 && Player_x_pos <= WINDOW_WIDTH - 200)
                        {
                            if(Burned_Toast == false)
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
                            else
                            {
                                Mix_PlayChannel(-1, Pasha_lvl2, 0);
                                SDL_RenderCopy(renderer, Dialogue_Pasha_1Texture, NULL, &HintRect); 
                                SDL_RenderPresent(renderer);
                                SDL_Delay(3000);
                                return -1;
                            }
                            
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
    SDL_DestroyTexture(Kitchen_ActiveTexture);

    SDL_DestroyTexture(MicrowaveTexture);
    SDL_DestroyTexture(Microwave_ActiveTexture);
    SDL_DestroyTexture(Microwave_1Texture);
    SDL_DestroyTexture(Microwave_2Texture);
    SDL_DestroyTexture(Microwave_3Texture);
    SDL_DestroyTexture(Microwave_brokenTexture);

    SDL_DestroyTexture(SugarTexture);

    SDL_DestroyTexture(ToastTexture);
    SDL_DestroyTexture(Toast_ActiveTexture);
    SDL_DestroyTexture(Burned_ToastTexture);
    SDL_DestroyTexture(TableTexture);

    SDL_DestroyTexture(InventoryTexture);

    SDL_DestroyTexture(WaterTexture);
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

    SDL_DestroyTexture(Oracle_1Texture);
    SDL_DestroyTexture(Oracle_2Texture);
    SDL_DestroyTexture(Oracle_3Texture);
    SDL_DestroyTexture(Oracle_4Texture);
    
    SDL_DestroyTexture(Dialogue_Artem_1Texture);
    SDL_DestroyTexture(Dialogue_Artem_2Texture);
    SDL_DestroyTexture(Dialogue_Artem_3Texture);
    SDL_DestroyTexture(Dialogue_Artem_4Texture);
    SDL_DestroyTexture(Dialogue_Artem_5Texture);
    SDL_DestroyTexture(Dialogue_Artem_6Texture);
    SDL_DestroyTexture(Dialogue_Pasha_1Texture);

    SDL_DestroyTexture(Hint_1Texture);
    SDL_DestroyTexture(Hint_2Texture);
    SDL_DestroyTexture(Hint_3Texture);

    SDL_DestroyTexture(PashaTexture);
    SDL_DestroyTexture(Pasha_ActiveTexture);


    SDL_DestroyTexture(backgroundImage);
    return -1;
}













