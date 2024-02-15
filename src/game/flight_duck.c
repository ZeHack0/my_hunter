/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include <SFML/Graphics.h>
#include "../../includes/my_duck_hunt.h"

sfIntRect flight_duck(sprite_struct_game_t *sprtStrtGm)
{
    sfRenderWindow *window;

    if (sprtStrtGm->rect_duck.left >= DUCK_WIDTH * 2)
        sprtStrtGm->rect_duck.left = 0;
    else
        sprtStrtGm->rect_duck.left += DUCK_WIDTH;
    if (sprtStrtGm->pos_duck.x >= 1920)
        sfRenderWindow_close(window);
    sfSprite_setTextureRect(sprtStrtGm->sprt_duck, sprtStrtGm->rect_duck);
    return sprtStrtGm->rect_duck;
}
