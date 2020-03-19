/*
** EPITECH PROJECT, 2020
** generator
** File description:
** direction
*/

#include "generator.h"

void dir_up(int x, int y, map_t *m)
{
    m->map[y-1][x] = '*';
    m->explored = m->explored + 1;
    for (int i = 0; i != 3; i++)
        m->direction[i] = -1;
    explore(x, y-2, m);
}

void dir_down(int x, int y, map_t *m)
{
    m->map[y+1][x] = '*';
    m->explored = m->explored + 1;
    for (int i = 0; i != 3; i++)
        m->direction[i] = -1;
    explore(x, y+2, m);
}

void dir_left(int x, int y, map_t *m)
{
    m->map[y][x-1] = '*';
    m->explored = m->explored + 1;
    for (int i = 0; i != 3; i++)
        m->direction[i] = -1;
    explore(x-2, y, m);
}

void dir_right(int x, int y, map_t *m)
{
    m->map[y][x+1] = '*';
    m->explored = m->explored + 1;
    for (int i = 0; i != 3; i++)
        m->direction[i] = -1;
    explore(x+2, y, m);
}
