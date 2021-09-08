/*
** EPITECH PROJECT, 2019
** dante
** File description:
** normal generator
*/
#include "generator.h"

int random_int(int min, int max)
{
    int nb = 0;
    return (nb = rand() % ((max - min + 1)));
}

int gen_normal(int rows, int cols)
{
    int i = 0;
    int l = 0;
    int nb = random_int(1, 4);
    cols = cols - 1;
    while (i != rows) {
        if (nb == 1 || nb == 3 ||
            nb == 0 || nb == 4 ||
            i == 0 || l == cols)
           printf("*");
        if (nb == 2 && i != 0 && l != cols)
            printf("X");
        i++;
        nb = random_int(1, 4);
        while (l != cols && i == rows) {
            i = 0;
            printf("\n");
            l++;
        }
    }
    return (0);
}