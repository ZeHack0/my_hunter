/*
** EPITECH PROJECT, 2023
** window_inits
** File description:
** game_jam
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>

sfRenderWindow *window_init(sfVideoMode video_mode)
{
    sfRenderWindow *window;

    window = sfRenderWindow_create(video_mode, " ", sfResize | sfClose, NULL);
    return window;
}
