/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** tools
*/
#include "generator.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

int randomcols(int one, int cols)
{
    int nb = 0;
    return (nb = rand() % ((one - cols)));
}

char **genemap(int rows, int cols)
{
    char **map = malloc(sizeof(char *) * cols + 1);
    if (rows == 0 || cols == 0)
        return (84);
    for (int i = 0; i != cols; i++) {
        map[i] = malloc(sizeof(char) * rows + 1);
    }
    for (int i = 0; i != cols; i++) {
        for (int mapgene = 0; mapgene != rows; mapgene++) {
            map[i][mapgene] = 'X';
        }
    }
    return map;
}
