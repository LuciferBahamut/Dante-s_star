/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator
*/

#include "generator.h"

void generate_imperfect(map_t *m)
{
    maze_perfect(m);
    for (int i = 0; i != m->y; i++)
        printf("%s\n", m->map[i]);
}

void generate_perfect(map_t *m)
{
<<<<<<< HEAD
//    int w = breakable_walls(m);

    generate_path(m);
=======
    maze_perfect(m);
>>>>>>> 7b62d763a1437ceada9152b0ecd8bb7be9f3b16f
    for (int i = 0; i != m->y; i++)
        printf("%s\n", m->map[i]);
}

void generate(map_t *m)
{
    if (m->perfect)
        generate_perfect(m);
    else
        generate_imperfect(m);
}
