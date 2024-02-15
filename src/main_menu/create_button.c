/*
** EPITECH PROJECT, 2023
** main_menu.c
** File description:
** .
*/

#include "../../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>
#include <unistd.h>

void create_btn_play(sprite_struct_menu_t *structure)
{
    structure->txtbtnpl =
            sfTexture_createFromFile("content/main_menu/play.png", NULL);
    structure->sprt_btn_play = sfSprite_create();
    structure->scl_btn_play = (sfVector2f){0.35, 0.35};
    structure->pos_btn_play = (sfVector2f){370, 745};
    sfSprite_setTexture(structure->sprt_btn_play, structure->txtbtnpl, sfTrue);
    sfSprite_scale(structure->sprt_btn_play, structure->scl_btn_play);
    sfSprite_setPosition(structure->sprt_btn_play, structure->pos_btn_play);
}

void create_btn_quit(sprite_struct_menu_t *sprite)
{
    sprite->txt_btn_exit =
            sfTexture_createFromFile("content/main_menu/exit.png", NULL);
    sprite->sprt_btn_exit = sfSprite_create();
    sprite->scl_btn_exit = (sfVector2f){0.35, 0.35};
    sprite->pos_btn_exit = (sfVector2f){500, 625};
    sfSprite_setTexture(sprite->sprt_btn_exit, sprite->txt_btn_exit, sfTrue);
    sfSprite_scale(sprite->sprt_btn_exit, sprite->scl_btn_exit);
    sfSprite_setPosition(sprite->sprt_btn_exit, sprite->pos_btn_exit);
}
