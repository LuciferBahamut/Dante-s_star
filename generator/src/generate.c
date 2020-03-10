/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator
*/

#include "generator.h"

void generate_imperfect(map_t *m)
{
    for (int i = 0; i != m->y; i++)
        printf("%s\n", m->map[i]);
}

void generate_perfect(map_t *m)
{
}

void generate(map_t *m)
{
    if (m->perfect == FALSE)
        generate_imperfect(m);
    else
        generate_perfect(m);
}
