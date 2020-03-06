/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator.h
*/

#ifndef __GENERATOR_H__
#define __GENERATOR_H__

int error_handling(int ac, char**av);

void write_error(char *str);
int my_atoi(char const *str);

#define ERROR 84
#define SUCCESS 0
#define TRUE 1
#define FALSE 0

#define STR_ERROR_ARG "this program must take 2 to 3 args (x y [perfect])\n"
#define STR_ERROR_DIM "the dimentions are incorect\n"
#define STR_ERROR_NBR "the dimensions must be different from 0\n"

#endif
