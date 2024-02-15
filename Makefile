##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## .
##

NAME = my_hunter

CFLAGS = -W -Wall -Wextra -g -L.

SRC = ./src/main.c
SRC += ./src/window_inits.c

SRC += ./src/game/back_game.c
SRC += ./src/game/duck.c
SRC += ./src/game/game.c
SRC += ./src/game/flight_duck.c
SRC += ./src/game/clock_duck.c

SRC += ./src/main_menu/create_bck.c
SRC += ./src/main_menu/main_menu.c
SRC += ./src/main_menu/create_button.c
SRC += ./src/main_menu/click_btn.c


OBJ = $(SRC:.c=.o)

CSFML = -lcsfml-graphics -lcsfml-system


all: $(OBJ)
	gcc $(OBJ) -o $(NAME) -I../includes $(CFLAGS) $(CSFML)

clean:
	rm -f $(OBJ)
	rm -f vgcore*

fclean: clean
	rm -f $(NAME)

re: fclean all
