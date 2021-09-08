/*
** EPITECH PROJECT, 2019
** dante
** File description:
** main
*/
#include "generator.h"



int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac > 4 || ac < 3) { return error(ERR_NOT_ENOUGH); }
    if (ac == 4) return check_perfect(atoi(av[1]), atoi(av[2]), av[3]);
    if (ac == 3) return gen_normal(atoi(av[1]), atoi(av[2]));
}