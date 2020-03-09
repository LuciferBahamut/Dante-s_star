/*
** EPITECH PROJECT, 2020
** dante
** File description:
** main
*/

#include "generator.h"

int main(int ac, char **av)
{
    map_t *m = malloc(sizeof(map_t));

    if (ac > 4 || ac < 3) {
        write_error(STR_ERROR_ARG);
        return (ERROR);
    }
    if (error_handling(ac, av))
        return (ERROR);
    fill_struct(m, av);
    generate(m);
    return (SUCCESS);
}
