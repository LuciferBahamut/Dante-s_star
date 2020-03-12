/*
** EPITECH PROJECT, 2020
** dante generator
** File description:
** count the number of walls that can be destroyed
*/

#include "generator.h"

int breakable_walls_ud(map_t *m)
{
    int walls = 0;

    return (walls);
}

int breakable_walls_rl(map_t *m)
{
    int walls = 0;

    return (walls);
}

int breakable_walls(map_t *m)
{
    int walls = 0;

    if (m->coor_x - 1 == -1 || m->coor_x + 1 == m->x + 1)
        return (breakable_walls_rl(m));
    if (m->coor_y - 1 == -1 || m->coor_y + 1 == m->y + 1)
        return (breakable_walls_ud(m));
    return (walls);
}
