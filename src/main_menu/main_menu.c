/*
** EPITECH PROJECT, 2023
** main
** File description:
** .
*/

#include "../../includes/my_duck_hunt.h"
#include <SFML/Graphics.h>


void main_menu(sfRenderWindow *window, int *game_status)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sprite_struct_menu_t *struct_menu = create_back_menu();

    window = window_init(video_mode);
    create_btn_play(struct_menu);
    create_btn_quit(struct_menu);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, struct_menu->sprtbackmn, NULL);
        sfRenderWindow_drawSprite(window, struct_menu->sprt_btn_play, NULL);
        sfRenderWindow_drawSprite(window, struct_menu->sprt_btn_exit, NULL);
        analyse_events(window, game_status);
        sfRenderWindow_display(window);
    }
}
