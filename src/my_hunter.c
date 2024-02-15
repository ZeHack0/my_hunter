/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include "../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>
#include <stdio.h>

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}
