/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include <SFML/Graphics.h>
#include "../../includes/my_duck_hunt.h"

void create_duck(sprite_struct_game_t *sprtStrtGm)
{
    sprtStrtGm->pos_duck = (sfVector2f) {-300, 600};
    sprtStrtGm->clock = sfClock_create();
    sprtStrtGm->txt_duck = sfTexture_createFromFile("content/Duck.png", NULL);
    sprtStrtGm->sprt_duck = sfSprite_create();
    sprtStrtGm->scl_duck = (sfVector2f) {1.12f, 1.12f};
    sprtStrtGm->rect_duck.top = 0;
    sprtStrtGm->rect_duck.left = 0;
    sprtStrtGm->rect_duck.width = 110;
    sprtStrtGm->rect_duck.height = 110;
    sfSprite_setPosition(sprtStrtGm->sprt_duck, sprtStrtGm->pos_duck);
    sfSprite_setTexture(sprtStrtGm->sprt_duck, sprtStrtGm->txt_duck, sfTrue);
    sfSprite_setTextureRect(sprtStrtGm->sprt_duck, sprtStrtGm->rect_duck);
    sfSprite_scale(sprtStrtGm->sprt_duck, sprtStrtGm->scl_duck);
}
