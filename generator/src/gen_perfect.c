/*
** EPITECH PROJECT, 2019
** dante
** File description:
** perfect generator
*/
#include "generator.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i]; i++)
        if (s2[i] == '\0')
            return 0;
    return s1[i] - s2[i];
}

int check_perfect(int rows, int cols, char *str)
{
    char *str2 = "perfect";
    if (my_strcmp(str, str2) == 0)
    gen_perfect(rows, cols);
    else {
        printf("argument errors\n");
        return (84);
    }
    return (0);
}

void my_putstrmap(char **map, int cols)
{
    for(int i=0; i != cols; i++) {
        my_putstr(map[i]);
        if(i!=cols-1)my_putchar('\n');
    }
}

int gen_perfect(int rows, int cols)
{
    char **map = genemap(rows, cols);
    int rand = randomcols(1 , cols);

    if (cols == 1) rand = 0;
    for (int a = 0; a < rows; a++) {
        if (a % 2 == 0) {
            for (int b = 0; b != cols; b++)
            map[b][a] = '*';
        }
    }
    for (int c = 0; c < rows-1; c++)
        map[rand][c] = '*';
    if (map[0][0] == 'X')
        map[0][0] = '*';
    if (map[cols-1][rows-1] == 'X')
        map[cols-1][rows-1] = '*';
    my_putstrmap(map, cols);
    return (0);
}
