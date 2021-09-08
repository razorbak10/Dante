/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** utiliti
*/
#include <stdlib.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i]; i++)
        if (s2[i] == '\0')
            return 0;
    return s1[i] - s2[i];
}