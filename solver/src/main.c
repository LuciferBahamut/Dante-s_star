/*
** EPITECH PROJECT, 2020
** dante
** File description:
** main solver
*/

#include "solver.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        write_error(STR_ERROR_ARG);
        return (ERROR);
    }
    return (SUCCESS);
}
