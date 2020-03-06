/*
** EPITECH PROJECT, 2020
** dante
** File description:
** fill_struct
*/

#include "generator.h"

void fill_struct(map_t *m, char **av)
{
    int max;

    m->x = my_atoi(av[1]);
    m->y = my_atoi(av[2]);
    m->map = malloc(sizeof(char *) * m->y);
    for (int i = 0; i != m->y; i++)
        m->map[i] = malloc(sizeof(char) * m->x);
    for (int i = 0; i != m->y; i++)
        for (int j = 0; j != m->x; j++)
            m->map[i][j] = 'X';
    m->map[0][0] = '*';
    m->map[m->y - 1][m->x - 1] = '*';
}
