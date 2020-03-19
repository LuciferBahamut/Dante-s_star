/*
** EPITECH PROJECT, 2020
** generation
** File description:
** maze_perfect
*/

#include "generator.h"

void get_direction(int x, int y, map_t *m)
{
    m->dir = 0;
    if (y > 1)
        if (m->map[y - 2][x] == 'X') {
            m->dir += 1;
            m->direction[0] = 1;
        }
    if (y < m->y - 2)
        if (m->map[y + 2][x] == 'X') {
            m->dir += 1;
            m->direction[1] = 1;
        }
    if (x > 1)
        if (m->map[y][x - 2] == 'X') {
            m->dir += 1;
            m->direction[2] = 1;
        }
    if (x < m->x - 2)
        if (m->map[y][x + 2] == 'X') {
            m->dir += 1;
            m->direction[3] = 1;
        }
}

void explore(int x, int y, map_t *m)
{
    int finish = (m->x * m->y) / 2;

    get_direction(x, y, m);
    if (m->dir == 0)
        m->random = 0;
    else
        m->random = rand() % m->dir;
    m->map[y][x] = '*';
    while (m->explored <= finish) {
        if (m->dir != 0)
            random_handling(x, y, m);
        else
            break;
    }
}

void maze_perfect(map_t *m)
{
//    if (m->x % 2 == 0)
//        m->x -= 1;
//    if (m->y % 2 == 0)
//        m->y -= 1;
    explore(m->coord_x, m->coord_y, m);
    for (int j = 2; j != m->x; j++)
        m->map[m->y-1][j] = '*';
}
