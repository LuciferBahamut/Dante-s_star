/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator
*/

#include "generator.h"

void generate(map_t *m)
{
    for (int i = 0; i != m->y; i++)
        printf("%s\n", m->map[i]);
}
