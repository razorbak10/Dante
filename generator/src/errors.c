/*
** EPITECH PROJECT, 2019
** dante
** File description:
** error handling
*/
#include "generator.h"

int error(int error)
{
    if (error == ERR_NOT_ENOUGH)
        fprintf(stderr, "Usage: ./generator x y [perfect]\n");
    return (84);
}