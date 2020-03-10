##
## EPITECH PROJECT, 2020
## dante
## File description:
## Makefile solver
##

NAME	=	solver

SRC	=	src/main.c		\
		src/fill_struct.c	\
		src/split_map.c		\
		src/error_handling.c	\
		util/write_error.c	\
		util/my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
