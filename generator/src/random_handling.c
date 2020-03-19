/*
** EPITECH PROJECT, 2020
** dante generator
** File description:
** random handling
*/

#include "generator.h"

void random_handling(int x, int y, map_t *m)
{
    switch (m->random) {
    case 0 : if (m->direction[m->random] == TRUE)
            dir_up(x, y, m);
        else
            m->random += 1;
        break;
    case 1 : if (m->direction[m->random] == TRUE)
            dir_down(x, y, m);
        else
            m->random += 1;
        break;
    case 2 : if (m->direction[m->random] == TRUE)
            dir_left(x, y, m);
        else
            m->random += 1;
        break;
    case 3 : if (m->direction[m->random] == TRUE)
            dir_right(x, y, m);
        break;
    }
}
