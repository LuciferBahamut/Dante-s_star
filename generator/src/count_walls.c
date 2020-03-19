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

    if (m->coord_y == 0) {
        if (m->map[m->coord_y][m->coord_x + 1] == 'X')
            walls++;
        if (m->map[m->coord_y][m->coord_x - 1] == 'X')
            walls++;
        if (m->map[m->coord_y + 1][m->coord_x] == 'X')
            walls++;
    }
    if (m->coord_y == m->y) {
        if (m->map[m->coord_y][m->coord_x - 1] == 'X')
            walls++;
        if (m->map[m->coord_y][m->coord_x + 1] == 'X')
            walls++;
        if (m->map[m->coord_y - 1][m->coord_x] == 'X')
            walls++;
    }
    return (walls);
}

int breakable_walls_rl(map_t *m)
{
    int walls = 0;

    if (m->coord_x == 0) {
        if (m->map[m->coord_y][m->coord_x + 1] == 'X')
            if (m->map[m->coord_y][m->coord_x + 2] == 'X')
                walls++;
        if (m->map[m->coord_y + 1][m->coord_x] == 'X')
            if (m->map[m->coord_y + 2][m->coord_x] == 'X')
                walls++;
        if (m->map[m->coord_y - 1][m->coord_x] == 'X')
            if (m->map[m->coord_y - 2][m->coord_x] == 'X')
                walls++;
    }
    if (m->coord_x == m->x) {
        if (m->map[m->coord_y][m->coord_x - 1] == 'X')
            walls++;
        if (m->map[m->coord_y + 1][m->coord_x] == 'X')
            walls++;
        if (m->map[m->coord_y - 1][m->coord_x] == 'X')
            walls++;
    }
    return (walls);
}

int breakable_walls(map_t *m)
{
    int walls = 0;

/*    if (is_in_corner(m)) {
        walls = count_walls_corner(m);
        return (walls);
    }
*/
    if (m->coord_x == 0 || m->coord_x == m->x)
        return (breakable_walls_rl(m));
    if (m->coord_y == 0|| m->coord_y == m->y)
        return (breakable_walls_ud(m));
//    walls = breakable_walls_all(m);
    return (walls);
}
