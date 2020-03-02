/*
** EPITECH PROJECT, 2020
** dante
** File description:
** main
*/

#include "generator.h"

int main(int ac, char **av)
{
    if (ac > 4 || ac < 3) {
        write_error(STR_ERROR_ARG);
        return (ERROR);
    }
    return (SUCCESS);
}
