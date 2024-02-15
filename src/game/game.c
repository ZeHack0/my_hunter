/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** .
*/

#include "../../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>

void analyse_events(sfRenderWindow *window, int *game_status)
{
    sfEvent event;
    sprite_struct_game_t struct_game;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    if (event.type == sfEvtMouseButtonPressed)
        if_click_quit(window, game_status);
    if (event.type == sfEvtMouseButtonPressed)
        if_click_play(window, game_status);
    }
}

void game(sfRenderWindow *window, int *game_status)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sprite_struct_game_t *struct_game = back_game();

    window = window_init(video_mode);
    create_duck(struct_game);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, struct_game->sprtbckgm, NULL);
        clock(struct_game);
        struct_game->pos_duck.x += 0.1;
        sfSprite_setPosition(struct_game->sprt_duck, struct_game->pos_duck);
        sfRenderWindow_drawSprite(window, struct_game->sprt_duck, NULL);
        analyse_events(window, game_status);
        sfRenderWindow_display(window);
    }
}
