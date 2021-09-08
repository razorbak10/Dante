/*
** EPITECH PROJECT, 2019
** generator
** File description:
** header
*/
#define ERR_NOT_ENOUGH 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// main.c
int gen_perfect(int rows, int cols);
int gen_normal(int rows, int cols);

// errors.c
int error(int error);

// gen_normal.c
int gen_normal(int rows, int cols);
int gen_perfect(int rows, int cols);

// gen_perfect.c
int my_strcmp(char const *s1, char const *s2);
int check_perfect(int rows, int cols, char *str);
void my_putstrmap(char **map, int cols);
int gen_perfect(int rows, int cols);
char **genemap(int rows, int cols);

// tools.c
void my_putchar(char c);
void my_putstr(char const *str);
int randomcols(int one, int cols);
int check_perfect(int rows, int cols, char *str);
