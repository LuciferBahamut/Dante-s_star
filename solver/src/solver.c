/*
** EPITECH PROJECT, 2020
** dante solver
** File description:
** solver
*/

#include "solver.h"

int unsolvable(map_t *m)
{
    if (m->map[0][0] == 'X' || m->map[m->y - 1][m->x - 1] == 'X') {
        printf("no solution found\n");
        return (TRUE);
    }
    return (FALSE);
}

int solve_this(map_t *m)
{
    if (unsolvable(m))
        return (TRUE);
    return (TRUE);
}
