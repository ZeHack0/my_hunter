/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include "../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>

int main(void)
{
    int game_status = 0;
    sfRenderWindow *window;

    if (game_status == 0)
        main_menu(window, &game_status);
    if (game_status == 1)
        game(window, &game_status);
}
