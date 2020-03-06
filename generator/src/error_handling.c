/*
** EPITECH PROJECT, 2020
** dante
** File description:
** error_handling generator
*/

#include "generator.h"

int error_handling(int ac, char **av)
{
    int x = my_atoi(av[1]);
    int y = my_atoi(av[2]);

    for (int i = 1; i != ac; i++)
        for (int j = 0; av[i][j] != '\0'; j++)
            if (av[i][j] < '0' || av[i][j] > '9') {
                write_error(STR_ERROR_DIM);
                return (TRUE);
            }
    if (x == 0 || y == 0) {
        write_error(STR_ERROR_NBR);
        return (TRUE);
    }
    return (FALSE);
}
