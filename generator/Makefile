##
## EPITECH PROJECT, 2020
## dante
## File description:
## makefile generator
##

NAME	=	generator

SRC	=	src/main.c		\
		src/fill_struct.c	\
		src/generate.c		\
<<<<<<< HEAD
		src/path.c		\
		src/count_walls.c	\
=======
>>>>>>> 7b62d763a1437ceada9152b0ecd8bb7be9f3b16f
		src/error_handling.c	\
		src/maze_perfect.c	\
		src/random_handling.c	\
		src/direction.c		\
		util/my_strcmp.c	\
		util/write_error.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

debug	:	CFLAGS += -g3
debug	:	all

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all debug clean fclean re
