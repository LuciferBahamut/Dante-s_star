##
## EPITECH PROJECT, 2020
## dante
## File description:
## makefile root
##

GENERATOR =	generator/

SOLVER	=	solver/

all	:	$(OBJ)
		make -C $(GENERATOR)
		make -C $(SOLVER)

clean	:
		make fclean -C $(GENERATOR)
		make fclean -C $(SOLVER)

fclean	:	clean

re	:	fclean all

.PHONY	:	all clean fclean re
