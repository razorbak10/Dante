/*
** EPITECH PROJECT, 2019
** solver
** File description:
** main
*/
#include "solver.h"

int main(int ac, char **av)
{
    if (ac != 2) return (error(ERR_NOT_ENOUGH_ARGS));
    return (init_solver(av[1]));
}