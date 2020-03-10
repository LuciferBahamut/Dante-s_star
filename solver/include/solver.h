/*
** EPITECH PROJECT, 2020
** dante
** File description:
** solver.h
*/

#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct map_t
{
    int x;
    int y;
    char **map;
} map_t;

int solve_this(map_t *m);

void fill_struct(map_t *m);
void split_map(map_t *m, char *buff);

int error_handling(char *arg,  map_t *m);
void write_error(char *str);
int my_strlen(char const *str);

#define ERROR 84
#define SUCCESS 0
#define TRUE 1
#define FALSE 0

#define STR_ERROR_ARG "this program must take 2 args. it must be a maze file.\n"
#define STR_ERROR_OPEN "could not open file.\n"
#define STR_ERROR_READ "could not read from file.\n"
#define STR_ERROR_INV "the maze is invalid.\n"

#endif
