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
		src/error_handling.c	\
		src/my_atoi.c		\
		src/write_error.c

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
