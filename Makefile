##
## EPITECH PROJECT, 2020
## dante
## File description:
## makefile root
##

NAME	=	test

GENERATOR =	generator/

SOLVER	=	solver/

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		make -C $(GENERATOR)
		make -C $(SOLVER)

clean	:
		$(GENERATOR) rm -f $(OBJ)
		$(SOLVER) rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
