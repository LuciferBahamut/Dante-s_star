##
## EPITECH PROJECT, 2020
## dante
## File description:
## makefile root
##

NAME	=	

SRC	=	src/main.c		\
		src/my_strlen.c		\
		src/my_putchar.c	\
		src/my_putstr.c		\
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
