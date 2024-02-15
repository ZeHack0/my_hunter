/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include "../../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>

sprite_struct_menu_t *create_back_menu(void)
{
    sprite_struct_menu_t *sprite_str = malloc(sizeof(sprite_struct_menu_t));

    sprite_str->txtbckmn =
            sfTexture_createFromFile("content/main_menu/bck.jpg", NULL);
    sprite_str->sprtbackmn = sfSprite_create();
    sprite_str->sclbckmn = (sfVector2f) {1.4f, 1.4f};
    sfSprite_setTexture(sprite_str->sprtbackmn, sprite_str->txtbckmn, sfTrue);
    sfSprite_scale(sprite_str->sprtbackmn, sprite_str->sclbckmn);
    return sprite_str;
}
