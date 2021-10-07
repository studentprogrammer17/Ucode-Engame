#include "header.h"

int start_lvl_one(SDL_Renderer *renderer)
{
    //Background
    SDL_Texture* backgroundImage = IMG_LoadTexture(renderer, "./resource/images/bg/bg_campus.png");
    SDL_Rect background1 = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};

    //Background Music
    Mix_Music *ServerSound = Mix_LoadMUS("./resource/music/bg_server.mp3");  
    Mix_Music *backgroundSound = Mix_LoadMUS("./resource/music/bg_server.mp3");  
    Mix_PlayMusic(backgroundSound, -1);

    //Sounds
    Mix_Chunk *Player_jump = Mix_LoadWAV("./resource/sounds/jump.wav"); 
    Mix_Chunk *Tumba_open = Mix_LoadWAV("./resource/sounds/Tumba_open.wav"); 
    Mix_Chunk *Gun_Reload = Mix_LoadWAV("./resource/sounds/Gun_Reload.wav"); 
    Mix_Chunk *Windows_Start = Mix_LoadWAV("./resource/sounds/Windows_Start.wav");
    Mix_Chunk *Windows_Error = Mix_LoadWAV("./resource/sounds/Windows_Error.wav");
    //Mix_Chunk *Wrenck_Kick = Mix_LoadWAV("./resource/sounds/wrench_kick.wav");

    //Textures
    SDL_Texture* FloorTexture = IMG_LoadTexture(renderer, "./resource/textures/Floor/cement_floor.png");
    SDL_Rect FloorRect = {0, WINDOW_HEIGHT - FLOOR_HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT};

    SDL_Texture* RoofTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Construct.png");
    SDL_Rect RoofRect = {WINDOW_WIDTH - 900, WINDOW_HEIGHT - 680, 1300, 800};

    ////Server
    SDL_Texture* ServerTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server.png");
    SDL_Texture* ServerOFFTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server0.png");
    SDL_Texture* Server1Texture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server2.png");
    SDL_Texture* Server2Texture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server3.png");
    SDL_Texture* Server3Texture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server4.png");
    SDL_Texture* Server_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server_mouse.png");
    SDL_Texture* ServerOFF_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server0_mouse.png");
    SDL_Texture* Server1_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server2_mouse.png");
    SDL_Texture* Server2_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server3_mouse.png");
    SDL_Texture* Server3_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Server/Server4_mouse.png");
    SDL_Rect ServerRect = {WINDOW_WIDTH - 550, WINDOW_HEIGHT - 400, 600, 400};

    ////Tabels
    SDL_Texture* TableTexture1 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem1.png");//billy число + = вправо. число -= влево. Число + = вверх, число - = вниз
    SDL_Texture* TableTexture2 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem2.png");//jojo
    SDL_Texture* TableTexture3 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem3.png");//jak fresko
    SDL_Texture* TableTexture4 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem4.png");//anonimus
    SDL_Texture* TableTexture5 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem5.png");//jotarobilly
    SDL_Texture* TableTexture6 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem6.png");//matiz
    SDL_Texture* TableTexture7 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem7.png");//pasha
    SDL_Texture* TableTexture8 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem8.png");//postirony
    SDL_Texture* TableTexture9 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem9.png");//stethem
    SDL_Texture* TableTexture10 = IMG_LoadTexture(renderer, "./resource/Textures/Memes/mem10.png");//shlepa
    SDL_Texture* TableTexture11 = IMG_LoadTexture(renderer, "./resource/Textures/Table/Imac.png");//empty
    SDL_Texture* TableTexture12 = IMG_LoadTexture(renderer, "./resource/Textures/Table/Imac_code.png");//empty
    SDL_Texture* TableTexture13 = IMG_LoadTexture(renderer, "./resource/Textures/Table/Imac_error.png");//empty
    SDL_Texture* TableTexture14 = IMG_LoadTexture(renderer, "./resource/Textures/Table/Imac_code_mouse.png");//empty
    SDL_Rect TableRect = {WINDOW_WIDTH - 900, WINDOW_HEIGHT - 550, 170, 120};
    SDL_Rect TableRect1 = {WINDOW_WIDTH - 750, WINDOW_HEIGHT - 550, 170, 120};
    SDL_Rect TableRect2 = {WINDOW_WIDTH - 600, WINDOW_HEIGHT - 590, 150, 100};
    SDL_Rect TableRect3 = {WINDOW_WIDTH - 750, WINDOW_HEIGHT - 590, 150, 100};
    SDL_Rect TableRect4 = {WINDOW_WIDTH - 600, WINDOW_HEIGHT - 550, 170, 120};
    SDL_Rect TableRect5 = {WINDOW_WIDTH - 1050, WINDOW_HEIGHT - 520, 200, 150};
    SDL_Rect TableRect6 = {WINDOW_WIDTH - 850, WINDOW_HEIGHT - 520, 200, 150};
    SDL_Rect TableRect7 = {WINDOW_WIDTH - 650, WINDOW_HEIGHT - 520, 200, 150};
    SDL_Rect TableRect8 = {WINDOW_WIDTH - 1300, WINDOW_HEIGHT - 500, 250, 200};
    SDL_Rect TableRect9 = {WINDOW_WIDTH - 980, WINDOW_HEIGHT - 500, 250, 200};
    SDL_Rect TableRect10 = {WINDOW_WIDTH - 1550, WINDOW_HEIGHT - 450, 300, 250};
    SDL_Rect TableRect11 = {WINDOW_WIDTH - 1200, WINDOW_HEIGHT - 450, 300, 250};
    SDL_Rect TableRect12 = {WINDOW_WIDTH - 850, WINDOW_HEIGHT - 450, 300, 250};
    SDL_Rect TableRect13 = {50, WINDOW_HEIGHT - 350, 300, 250};

    ////Inventory
    SDL_Texture* InventoryTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Inventory.png");
    SDL_Rect InventoryRect = {10, 10, 64, 64};
    SDL_Rect InventoryRect1 = {84, 10, 64, 64};

    ////Tumba
    SDL_Texture* TumbaTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Tumba.png");
    SDL_Texture* Tumba_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Other/Tumba_mouse.png");
    SDL_Rect TumbaRect = {350, WINDOW_HEIGHT - 250, 130, 150};

    ////Backpack
    SDL_Texture* backpackTexture = IMG_LoadTexture(renderer, "./resource/Textures/Backpack/Backpack.png");
    SDL_Texture* backpack_mouseTexture = IMG_LoadTexture(renderer, "./resource/Textures/Backpack/Backpack_mouse.png");
    SDL_Rect backpackRect = {280, WINDOW_HEIGHT - 154, 64, 64};

    ////Gun
    SDL_Texture* GunTexture = IMG_LoadTexture(renderer, "./resource/Textures/Gun/Gun.png");
    SDL_Rect GunInvRect = {18, 18, 50, 50};
    //SDL_Rect GunInvRect1 = {92, 18, 50, 50};

    ////Wrench
    SDL_Texture* WrenchTexture = IMG_LoadTexture(renderer, "./resource/Textures/Wrench/Wrench.png");
    SDL_Rect WrenchInvRect = {18, 18, 50, 50};
    SDL_Rect WrenchInvRect1 = {92, 18, 50, 50};

    //Player
    SDL_Texture* Player_stand_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_stand_right.png");
    SDL_Texture* Player_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right.png");
    SDL_Texture* Player2_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right2.png");
    SDL_Texture* Player3_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right3.png");
    SDL_Texture* Player_jump_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_jump_right.png");

    SDL_Texture* Player_stand_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_stand_left.png");
    SDL_Texture* Player_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left.png");
    SDL_Texture* Player2_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left2.png");
    SDL_Texture* Player3_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left3.png");
    SDL_Texture* Player_jump_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_jump_left.png");
    
    // Texts
    SDL_Texture* Dialogue_0Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue0.png");
    SDL_Texture* Dialogue_1Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue1.png");
    SDL_Texture* Dialogue_2Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue2.png");
    SDL_Texture* Dialogue_3Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue3.png");
    SDL_Texture* Dialogue_4Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue4.png");
    SDL_Texture* Dialogue_5Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue5.png");
    SDL_Texture* Dialogue_6Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue6.png");
    SDL_Texture* Dialogue_7Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue7.png");
    SDL_Texture* Dialogue_8Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue8.png");
    SDL_Texture* Dialogue_9Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue9.png");
    SDL_Texture* Dialogue_10Texture = IMG_LoadTexture(renderer, "./resource/Texts/Level1/Dialogue10.png");
    //SDL_Rect DialogueRect = {10, WINDOW_HEIGHT - 400, 300, 75};
    

    //Events
    SDL_Event event; 
 
    //Game events
    bool Wrench = false;
    bool Gun = false;
    bool Error = true;
    bool ServerOFF = true;

    //Main loop
    Uint32 ticks;
    Uint32 stand;
    bool game = true;
    int Player_x_pos = 10;
    int Player_Y_pos = 0;
    //int jump = 0;
    bool skip = false;
    bool direction = false; //false == left; true == right
    int x_m;
    int y_m;

    SDL_RenderClear(renderer);
    SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
    SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
    SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
    SDL_Rect DialogueRect = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
    SDL_RenderCopy(renderer, Dialogue_1Texture, NULL, &DialogueRect);
    
    if(ServerOFF == true)
    {
        SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
    }
    else
    {
        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
    }
    //Inventory Render
    if((Wrench == false) && (Gun == false))
    {
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
    }
    else if(Wrench == true && Gun == false)
    {
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
    }
    else if(Wrench == false && Gun == true)
    {
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
    }
    else if(Wrench == true && Gun == true)
    {
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
        SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
        SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
    }
    SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
    SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
    SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
    SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
    SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
    SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
    SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
    SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
    SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
    SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
    if(ServerOFF == true)
    {
        SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
    }
    else if(Error == true)
    {
        SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
    }
    else
    {
        SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
    }
    SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
    SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
    SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
    SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
    SDL_RenderPresent(renderer);
    SDL_Delay(2000);
    SDL_RenderClear(renderer);

    int count_server = 0;

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
        if(ServerOFF == true)
        {
            SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
        }
        else
        {
            if(count_server == 0)
            {
                SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                count_server++;
            }
            else if(count_server == 1)
            {
                SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                count_server++;
            }
            else if(count_server == 2)
            {
                SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                count_server++;
            }
            else if(count_server == 3)
            {
                SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                count_server = 0;
            }
            SDL_Delay(1000/120);
        }
        //Inventory Render
        if((Wrench == false) && (Gun == false))
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
        }
        else if(Wrench == true && Gun == false)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
        }
        else if(Wrench == false && Gun == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
        }
        else if(Wrench == true && Gun == true)
        {
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
            SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
            SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
            SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
        }
        SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
        SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
        SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
        SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
        SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
        SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
        SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
        SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
        SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
        SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
        SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
        SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
        SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
        if(ServerOFF == true)
        {
            SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
        }
        else if(Error == true)
        {
            SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
        }
        else
        {
            SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
        }
        SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
        SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);

        //Active object checks and enabled
        if(x_m >= 280 && x_m <= 344 && y_m >= WINDOW_HEIGHT - 154 && y_m <= WINDOW_HEIGHT - 90) 
        {
            if(Player_x_pos >= 100 && Player_x_pos <= 400 && Gun == false)
            {
                SDL_RenderCopy(renderer, backpack_mouseTexture, NULL, &backpackRect);   
            }
        }
        else if(x_m >= 370 && x_m <= 440 && y_m >= WINDOW_HEIGHT - 200 && y_m <= WINDOW_HEIGHT - 150) 
        {
            if(Player_x_pos >= 200 && Player_x_pos <= 540 && Wrench == false && ServerOFF == false)
            {
                SDL_RenderCopy(renderer, Tumba_mouseTexture, NULL, &TumbaRect);   
            }
        }
        else if(x_m >= WINDOW_WIDTH - 550 && x_m <= WINDOW_WIDTH && y_m >= WINDOW_HEIGHT - 400 && y_m <= WINDOW_HEIGHT - 90) 
        {
            if(Player_x_pos >= WINDOW_WIDTH - PLAYER_WIDTH - 550 && Player_x_pos <= WINDOW_WIDTH && ServerOFF == true)
            {
                SDL_RenderCopy(renderer, ServerOFF_mouseTexture, NULL, &ServerRect);   
            }
            else if(Player_x_pos >= WINDOW_WIDTH - PLAYER_WIDTH - 550 && Player_x_pos <= WINDOW_WIDTH && ServerOFF == false && Wrench == true && Error == true)
            {
                if(count_server == 0)
                {
                    SDL_RenderCopy(renderer, Server_mouseTexture, NULL, &ServerRect);
                    count_server++;
                }
                else if(count_server == 1)
                {
                    SDL_RenderCopy(renderer, Server1_mouseTexture, NULL, &ServerRect);
                    count_server++;
                }
                else if(count_server == 2)
                {
                    SDL_RenderCopy(renderer, Server2_mouseTexture, NULL, &ServerRect);
                    count_server++;
                }
                else if(count_server == 3)
                {
                    SDL_RenderCopy(renderer, Server3_mouseTexture, NULL, &ServerRect);
                    count_server = 0;
                }
                SDL_Delay(1000/120);
            }
        }
        else if(x_m >= 50 && x_m <= 350 && y_m >= WINDOW_HEIGHT - 350 && y_m <= WINDOW_HEIGHT - 150) 
        {
            if(Player_x_pos >= 0 && Player_x_pos <= 400 && Error == false)
            {
                SDL_RenderCopy(renderer, TableTexture14, NULL, &TableRect13);   
            }
        }
        mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
        SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
        //Event listener
        while (SDL_PollEvent(&event)) 
        {
            switch (event.type) 
            {
                case SDL_QUIT:
                    game = false;
                    break;
                case SDL_KEYDOWN:
                    mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
                    SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
                    switch(event.key.keysym.sym)
                    {                   
                        case SDLK_UP:   
                            Mix_PlayChannel(-1, Player_jump, 0);
                            while (Player_Y_pos > JUMP_HEIGHT) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
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
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                //Inventory Render
                                if((Wrench == false) && (Gun == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Wrench == true && Gun == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
                                }
                                else if(Wrench == false && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                }
                                else if(Wrench == true && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
                                }
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
                                SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
                                SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
                                SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
                                SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
                                SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
                                SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
                                SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
                                }
                                else if(Error == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
                                }
                                SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
                                SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
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
                                SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }
                            while(Player_Y_pos < 0) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
                                Player_Y_pos += JUMP_STEP;
                                
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                //Inventory Render
                                if((Wrench == false) && (Gun == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Wrench == true && Gun == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
                                }
                                else if(Wrench == false && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                }
                                else if(Wrench == true && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
                                }
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
                                SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
                                SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
                                SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
                                SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
                                SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
                                SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
                                SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
                                }
                                else if(Error == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
                                }
                                SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
                                SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
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
                                SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
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
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
                                Player_Y_pos -= JUMP_STEP*2;

                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                //Inventory Render
                                if((Wrench == false) && (Gun == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Wrench == true && Gun == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
                                }
                                else if(Wrench == false && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                }
                                else if(Wrench == true && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
                                }
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
                                SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
                                SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
                                SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
                                SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
                                SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
                                SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
                                SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
                                }
                                else if(Error == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
                                }
                                SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
                                SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
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
                                SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
                                SDL_RenderPresent(renderer);
                                SDL_Delay(1000/120);
                                SDL_RenderClear(renderer); 
                            }
                            while(Player_Y_pos < 0) 
                            {
                                mx_move(&Player_x_pos, event, &direction, renderer, PlayerStandRect, 1);
                                Player_Y_pos += JUMP_STEP;
                                
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                //Inventory Render
                                if((Wrench == false) && (Gun == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Wrench == true && Gun == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
                                }
                                else if(Wrench == false && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                }
                                else if(Wrench == true && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
                                }
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
                                SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
                                SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
                                SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
                                SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
                                SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
                                SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
                                SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
                                }
                                else if(Error == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
                                }
                                SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
                                SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
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
                                SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
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
                            if(ServerOFF == false)
                            {
                                Mix_PlayMusic(ServerSound, -1);
                            }
                            break;
                        case SDLK_ESCAPE:
                            if(pause_game(renderer, 2) == -1)
                            {
                                return -1;
                            }
                            Mix_PlayMusic(backgroundSound, -1);
                            if(ServerOFF == false)
                            {
                                Mix_PlayMusic(ServerSound, -1);
                            }
                            break;
                    }
                break;
                case SDL_MOUSEMOTION:
                    x_m = event.motion.x;
                    y_m = event.motion.y;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 280 
                    && event.button.x <= 344
                    && event.button.y >= WINDOW_HEIGHT - 154
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= 100 && Player_x_pos <= 400 && Gun == false)
                        {
                            Gun = true;
                            Mix_PlayChannel(-1, Gun_Reload, 0);
                            SDL_Rect DialogueRect1 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
                            SDL_RenderCopy(renderer, Dialogue_0Texture, NULL, &DialogueRect1);
                            SDL_RenderPresent(renderer);
                            SDL_Delay(2000);
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 50
                    && event.button.x <= 350
                    && event.button.y >= WINDOW_HEIGHT - 350
                    && event.button.y <= WINDOW_HEIGHT - 150) 
                    {
                        if(Player_x_pos >= 0 && Player_x_pos <= 400 && Error == false)
                        {
                            game = false;
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= 370
                    && event.button.x <= 440
                    && event.button.y >= WINDOW_HEIGHT - 200
                    && event.button.y <= WINDOW_HEIGHT - 150) 
                    {
                        if(Player_x_pos >= 200 && Player_x_pos <= 540 && Wrench == false && ServerOFF == false)
                        {
                            Wrench = true;
                            Mix_PlayChannel(-1, Tumba_open, 0);
                            SDL_Rect DialogueRect1 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
                            SDL_RenderCopy(renderer, Dialogue_8Texture, NULL, &DialogueRect1);
                            SDL_RenderPresent(renderer);
                            SDL_Delay(2000);
                            SDL_RenderCopy(renderer, Dialogue_9Texture, NULL, &DialogueRect1);
                            SDL_RenderPresent(renderer);
                            SDL_Delay(2000);
                        }
                    }
                    else if (event.button.button == SDL_BUTTON_LEFT 
                    && event.button.x >= WINDOW_WIDTH - 550
                    && event.button.x <= WINDOW_WIDTH
                    && event.button.y >= WINDOW_HEIGHT - 400
                    && event.button.y <= WINDOW_HEIGHT - 90) 
                    {
                        if(Player_x_pos >= WINDOW_WIDTH - PLAYER_WIDTH - 550 && Player_x_pos <= WINDOW_WIDTH && ServerOFF == true)
                        {
                            ServerOFF = false;
                            Mix_PlayChannel(-1, Windows_Start, 0);
                            SDL_Delay(3000);
                            Mix_PlayChannel(-1, Windows_Error, 0);
                            Mix_PlayMusic(ServerSound, -1);
                            for (int i = 0; i < 6; i++)
                            {
                                SDL_RenderClear(renderer);
                                SDL_Rect PlayerStandRect1 = {Player_x_pos, WINDOW_HEIGHT - 90 - PLAYER_HEIGHT + Player_Y_pos, PLAYER_WIDTH, PLAYER_HEIGHT};
                                SDL_RenderCopy(renderer, backgroundImage, NULL, &background1);
                                SDL_RenderCopy(renderer, FloorTexture, NULL, &FloorRect);
                                SDL_Rect DialogueRect2 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, ServerOFFTexture, NULL, &ServerRect);
                                }
                                else
                                {
                                    if(count_server == 0)
                                    {
                                        SDL_RenderCopy(renderer, ServerTexture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 1)
                                    {
                                        SDL_RenderCopy(renderer, Server1Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 2)
                                    {
                                        SDL_RenderCopy(renderer, Server2Texture, NULL, &ServerRect);
                                        count_server++;
                                    }
                                    else if(count_server == 3)
                                    {
                                        SDL_RenderCopy(renderer, Server3Texture, NULL, &ServerRect);
                                        count_server = 0;
                                    }
                                    SDL_Delay(1000/120);
                                }
                                //Inventory Render
                                if((Wrench == false) && (Gun == false))
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                }
                                else if(Wrench == true && Gun == false)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect);
                                }
                                else if(Wrench == false && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                }
                                else if(Wrench == true && Gun == true)
                                {
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect);
                                    SDL_RenderCopy(renderer, InventoryTexture, NULL, &InventoryRect1);
                                    SDL_RenderCopy(renderer, GunTexture, NULL, &GunInvRect);
                                    SDL_RenderCopy(renderer, WrenchTexture, NULL, &WrenchInvRect1);
                                }
                                SDL_RenderCopy(renderer, TableTexture1, NULL, &TableRect);
                                SDL_RenderCopy(renderer, TableTexture2, NULL, &TableRect1);
                                SDL_RenderCopy(renderer, TableTexture3, NULL, &TableRect2);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect3);
                                SDL_RenderCopy(renderer, TableTexture5, NULL, &TableRect4);
                                SDL_RenderCopy(renderer, TableTexture6, NULL, &TableRect5);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect6);
                                SDL_RenderCopy(renderer, TableTexture8, NULL, &TableRect7);
                                SDL_RenderCopy(renderer, TableTexture9, NULL, &TableRect8);
                                SDL_RenderCopy(renderer, TableTexture10, NULL, &TableRect9);
                                SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect10);
                                SDL_RenderCopy(renderer, TableTexture7, NULL, &TableRect11);
                                SDL_RenderCopy(renderer, TableTexture4, NULL, &TableRect12);
                                if(ServerOFF == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture11, NULL, &TableRect13);
                                }
                                else if(Error == true)
                                {
                                    SDL_RenderCopy(renderer, TableTexture13, NULL, &TableRect13); 
                                }
                                else
                                {
                                    SDL_RenderCopy(renderer, TableTexture12, NULL, &TableRect13); 
                                }
                                SDL_RenderCopy(renderer, backpackTexture, NULL, &backpackRect);
                                SDL_RenderCopy(renderer, TumbaTexture, NULL, &TumbaRect);
                                SDL_RenderCopy(renderer, Player_stand_leftTexture, NULL, &PlayerStandRect1);
                                SDL_RenderCopy(renderer, RoofTexture, NULL, &RoofRect);
                                switch(i)
                                {
                                    case 0: SDL_RenderCopy(renderer, Dialogue_2Texture, NULL, &DialogueRect2); break;
                                    case 1: SDL_RenderCopy(renderer, Dialogue_3Texture, NULL, &DialogueRect2); break;
                                    case 2: SDL_RenderCopy(renderer, Dialogue_4Texture, NULL, &DialogueRect2); break;
                                    case 3: SDL_RenderCopy(renderer, Dialogue_5Texture, NULL, &DialogueRect2); break;
                                    case 4: SDL_RenderCopy(renderer, Dialogue_6Texture, NULL, &DialogueRect2); break;
                                    case 5: SDL_RenderCopy(renderer, Dialogue_7Texture, NULL, &DialogueRect2); break;
                                }
                                SDL_RenderPresent(renderer);
                                SDL_Delay(3000);
                                SDL_RenderClear(renderer);
                            }
                        }
                        else if(Player_x_pos >= WINDOW_WIDTH - PLAYER_WIDTH - 550 && Player_x_pos <= WINDOW_WIDTH && ServerOFF == false && Wrench == true)
                        {
                            Error = false;
                            Mix_PlayMusic(ServerSound, -1);
                            SDL_Rect DialogueRect1 = {10 + Player_x_pos, WINDOW_HEIGHT - 400, 300, 75};
                            SDL_RenderCopy(renderer, Dialogue_10Texture, NULL, &DialogueRect1);
                            SDL_RenderPresent(renderer);
                            SDL_Delay(2000);
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

    SDL_DestroyTexture(Player_stand_rightTexture);
    SDL_DestroyTexture(Player2_run_rightTexture);
    SDL_DestroyTexture(Player3_run_rightTexture);
    SDL_DestroyTexture(Player_run_rightTexture);

    SDL_DestroyTexture(Player_stand_leftTexture);
    SDL_DestroyTexture(Player2_run_leftTexture);
    SDL_DestroyTexture(Player3_run_leftTexture);
    SDL_DestroyTexture(Player_run_leftTexture);

    SDL_DestroyTexture(TableTexture1);
    SDL_DestroyTexture(TableTexture2);
    SDL_DestroyTexture(TableTexture3);
    SDL_DestroyTexture(TableTexture4);
    SDL_DestroyTexture(TableTexture5);
    SDL_DestroyTexture(TableTexture6);
    SDL_DestroyTexture(TableTexture7);
    SDL_DestroyTexture(TableTexture8);
    SDL_DestroyTexture(TableTexture9);
    SDL_DestroyTexture(TableTexture10);
    SDL_DestroyTexture(TableTexture11);
    SDL_DestroyTexture(backpackTexture);
    SDL_DestroyTexture(backpack_mouseTexture);

    SDL_DestroyTexture(Dialogue_0Texture);
    SDL_DestroyTexture(Dialogue_1Texture);
    SDL_DestroyTexture(Dialogue_2Texture);
    SDL_DestroyTexture(Dialogue_3Texture);
    SDL_DestroyTexture(Dialogue_4Texture);
    SDL_DestroyTexture(Dialogue_5Texture);
    SDL_DestroyTexture(Dialogue_6Texture);
    SDL_DestroyTexture(Dialogue_7Texture);
    SDL_DestroyTexture(Dialogue_8Texture);
    SDL_DestroyTexture(Dialogue_9Texture);
    SDL_DestroyTexture(Dialogue_10Texture);

    SDL_DestroyTexture(backgroundImage);
    return -1;
}





