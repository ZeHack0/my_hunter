/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include <SFML/Graphics.h>
#include "../../includes/my_duck_hunt.h"

void if_click_play(sfRenderWindow *window, int *game_status)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= 401 && mouse.x <= 642 && mouse.y >= 745 && mouse.y <= 836) {
            *game_status = 1;
            sfRenderWindow_close(window);
    }
}

void if_click_quit(sfRenderWindow *window, int *game_status)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= 537 && mouse.x <= 772 && mouse.y >= 633 && mouse.y <= 725) {
            *game_status = 0;
            sfRenderWindow_close(window);
    }
}
