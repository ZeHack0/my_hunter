/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include <SFML/Graphics.h>
#include "../../includes/my_duck_hunt.h"

void clock(sprite_struct_game_t *strct_gm)
{
    sfTime time = sfClock_getElapsedTime(strct_gm->clock);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 0.15) {
        flight_duck(strct_gm);
        sfClock_restart(strct_gm->clock);
    }
}
