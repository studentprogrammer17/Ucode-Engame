#include "header.h"
int tmp = 0;
void mx_move(int *pers_x, SDL_Event event, bool *direction, SDL_Renderer *renderer, SDL_Rect PlayerStandRect, int Pers_id)
{
    SDL_Texture* Player_stand_rightTexture = NULL;
    SDL_Texture* Player_run_rightTexture = NULL;
    SDL_Texture* Player2_run_rightTexture = NULL;
    SDL_Texture* Player3_run_rightTexture = NULL;

    SDL_Texture* Player_stand_leftTexture = NULL;
    SDL_Texture* Player_run_leftTexture = NULL;
    SDL_Texture* Player2_run_leftTexture = NULL;
    SDL_Texture* Player3_run_leftTexture = NULL;
    if (Pers_id == 0)
    {
        Player_stand_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_right.png");
        Player_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right.png");
        Player2_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right1.png");
        Player3_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_right2.png");

        Player_stand_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_stand_left.png");
        Player_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left.png");
        Player2_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left1.png");
        Player3_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/artem/Player_run_left2.png");
    }
    else if(Pers_id == 1)
    {
        Player_stand_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_stand_right.png");
        Player_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right.png");
        Player2_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right2.png");
        Player3_run_rightTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_right3.png");

        Player_stand_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_stand_left.png");
        Player_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left.png");
        Player2_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left2.png");
        Player3_run_leftTexture = IMG_LoadTexture(renderer, "./resource/images/players/pasha/Pasha_run_left3.png");
    }
    animation = STATIC;
    switch (event.type)
    {
        case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            {                   
                case SDLK_LEFT:
                    if (*pers_x <= 0)
                    {
                        *pers_x = 1;
                        animation = STATIC;
                        break;
                    }
                    else if (*pers_x >= WINDOW_WIDTH - PLAYER_WIDTH)
                    {
                        *pers_x = WINDOW_WIDTH - PLAYER_WIDTH - 1;
                        animation = STATIC;
                        break;
                    }
                    else
                    {
                        *pers_x -= MOVE_STEP*2;
                    }
                    *direction = false;
                    if(tmp == 0)
                    {
                        animation = MOVE_ONE;
                        tmp = 1;
                    }
                    else if(tmp == 1)
                    {
                        animation = MOVE_TWO;
                        tmp = 2;
                    }
                    else 
                    {
                        animation = MOVE_THREE;
                        tmp = 0;
                    }
                    SDL_Delay(1000/120);
                break;

                case SDLK_RIGHT:
                    if (*pers_x <= 0)
                    {
                        *pers_x = 1;
                        animation = STATIC;
                        break;
                    }
                    else if (*pers_x >= WINDOW_WIDTH - PLAYER_WIDTH)
                    {
                        *pers_x = WINDOW_WIDTH - PLAYER_WIDTH - 1;
                        animation = STATIC;
                        break;
                    }
                    else
                    {
                        *pers_x += MOVE_STEP*2;
                    }
                    *direction = true;
                    if(tmp == 0)
                    {
                        animation = MOVE_ONE;
                        tmp = 1;
                    }
                    else if(tmp == 1)
                    {
                        animation = MOVE_TWO;
                        tmp = 2;
                    }
                    else 
                    {
                        animation = MOVE_THREE;
                        tmp = 0;
                    }
                    SDL_Delay(1000/120);
                break;
            }
        break;
        case SDL_KEYUP:
            switch(event.key.keysym.sym)
            {                   
                case SDLK_LEFT:
                    *direction = false;
                    animation = STATIC;
                break;

                case SDLK_RIGHT:
                    *direction = true;
                    animation = STATIC;
                break;
            }
        break;
        default:
            animation = STATIC;
        break;
    }
    if(*direction == false)
    {
        if(animation == STATIC || *pers_x == 1 || *pers_x == (WINDOW_WIDTH - PLAYER_WIDTH - 1))
        {
            CopyTexture(renderer, Player_stand_leftTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_ONE)
        {
            CopyTexture(renderer, Player_run_leftTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_TWO)
        {
            CopyTexture(renderer, Player2_run_leftTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_THREE)
        {
            CopyTexture(renderer, Player3_run_leftTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
    }
    else
    {
        if(animation == STATIC || *pers_x == 1 || *pers_x == (WINDOW_WIDTH - PLAYER_WIDTH - 1))
        {
            CopyTexture(renderer, Player_stand_rightTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_ONE)
        {
            CopyTexture(renderer, Player_run_rightTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_TWO)
        {
            CopyTexture(renderer, Player2_run_rightTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
        else if(animation == MOVE_THREE)
        {
            CopyTexture(renderer, Player3_run_rightTexture, PlayerStandRect);
            SDL_Delay(1000/60);
        }
    }

    SDL_DestroyTexture(Player_stand_rightTexture);
    SDL_DestroyTexture(Player_run_rightTexture);
    SDL_DestroyTexture(Player2_run_rightTexture);
    SDL_DestroyTexture(Player3_run_rightTexture);

    SDL_DestroyTexture(Player_stand_leftTexture);
    SDL_DestroyTexture(Player_run_leftTexture);
    SDL_DestroyTexture(Player2_run_leftTexture);
    SDL_DestroyTexture(Player3_run_leftTexture);
}






