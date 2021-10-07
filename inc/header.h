#pragma once
#include "const.h"
#include "libs.h"

//Random
const char * init_bg();
const char * init_sound();

//Levels main functions
int menu(SDL_Renderer *renderer);
int start_lvl_one(SDL_Renderer *renderer);
int start_lvl_two(SDL_Renderer *renderer);
int start_lvl_three(SDL_Renderer *renderer);
int start_lvl_four(SDL_Renderer *renderer);
int start_lvl_desert(SDL_Renderer *renderer);
void loading(SDL_Renderer *renderer);
int about(SDL_Renderer *renderer);
int pause_game(SDL_Renderer *renderer, int lvl);

//Move controller
void mx_move(int *pers_x, SDL_Event event, bool *direction, SDL_Renderer *renderer, SDL_Rect PlayerStandRect, int Pers_id);

void CopyTexture(SDL_Renderer *renderer, SDL_Texture* Texture, SDL_Rect Rect);
void random_table(SDL_Rect TableRect, SDL_Renderer *renderer);






