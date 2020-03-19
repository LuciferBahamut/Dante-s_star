/*
** EPITECH PROJECT, 2020
** dante generator
** File description:
** generate the path
*/

#include "generator.h"

void generate_path(map_t *m)
{
    int i = (m->x / 2);
    int j = (m->y / 4);
    int c[2] = {0, 0};

    for (c[0] = 0; c[0] != i; c[0]++)
        m->map[c[1]][c[0]] = '*';
    for (c[1] = 0; c[1] != j; c[1]++)
        m->map[c[1]][c[0]] = '*';
    i += m->x / 4;
    for (; c[0] != i; c[0]++)
        m->map[c[1]][c[0]] = '*';
    j += (m->y / 2) - 2;
    for (; c[1] != j; c[1]++)
        m->map[c[1]][c[0]] = '*';
    i -= m->x / 2;
    for (; c[0] != i; c[0]--)
        m->map[c[1]][c[0]] = '*';
    for (; c[1] != m->y; c[1]++)
        m->map[c[1]][c[0]] = '*';
    for (; c[0] != m->x - 1; c[0]++)
        m->map[c[1] - 1][c[0]] = '*';
}
