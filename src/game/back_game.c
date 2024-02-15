/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include <SFML/Graphics.h>
#include "../../includes/my_duck_hunt.h"

sprite_struct_game_t *back_game(void)
{
    sprite_struct_game_t *sprtstrgm = malloc(sizeof(sprite_struct_game_t));

    sprtstrgm->txtbckgm = sfTexture_createFromFile("content/bck_h.jpg", NULL);
    sprtstrgm->sprtbckgm = sfSprite_create();
    sprtstrgm->sclbckgm = (sfVector2f){1, 1};
    sfSprite_setTexture(sprtstrgm->sprtbckgm, sprtstrgm->txtbckgm, sfTrue);
    sfSprite_setScale(sprtstrgm->sprtbckgm, sprtstrgm->sclbckgm);
    return sprtstrgm;
}
