/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** .
*/

#ifndef MY_H
    #define MY_H

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <stdio.h>
    #include "struct.h"


typedef struct sprite_struct_game{
    sfTexture *txtbckgm;
    sfSprite *sprtbckgm;
    sfVector2f sclbckgm;
    sfTexture *txt_duck;
    sfSprite *sprt_duck;
    sfVector2f scl_duck;
    sfIntRect rect_duck;
    sfVector2f pos_duck;
    sfClock *clock;
} sprite_struct_game_t;

typedef struct sprite_struct_menu {
    sfTexture *txtbckmn;
    sfSprite *sprtbackmn;
    sfVector2f sclbckmn;

    sfTexture *txtbtnpl;
    sfSprite *sprt_btn_play;
    sfVector2f scl_btn_play;
    sfVector2f pos_btn_play;

    sfTexture *txt_btn_exit;
    sfSprite *sprt_btn_exit;
    sfVector2f scl_btn_exit;
    sfVector2f pos_btn_exit;
} sprite_struct_menu_t;

sprite_struct_game_t *back_game(void);
void create_duck(sprite_struct_game_t *sprtStrtGm);
void game(sfRenderWindow *window, int *game_status);
sfIntRect flight_duck(sprite_struct_game_t *strct_gm);
void clock(sprite_struct_game_t *strct_gm);
sfIntRect reload_duck(sprite_struct_game_t *strct_gm);

sprite_struct_menu_t *create_back_menu(void);
void main_menu(sfRenderWindow *window, int *game_status);
void create_btn_play(sprite_struct_menu_t *spritestrctmn);
void create_btn_quit(sprite_struct_menu_t *sprite_struct_menu);

void if_click_play(sfRenderWindow *window, int *game_status);
void if_click_quit(sfRenderWindow *window, int *game_status);

sfRenderWindow *window_init(sfVideoMode mode);
void analyse_events(sfRenderWindow *window, int *game_status);

#endif /* !MY_H */
