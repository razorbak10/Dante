/*
** EPITECH PROJECT, 2019
** dante
** File description:
** error handling
*/
#include "solver.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int error(int error)
{
    if (error == ERR_NOT_ENOUGH_ARGS)
        fprintf(stderr, "Usage: ./solver maze.txt\n");
    return (84);
}

int errno_parser(char *filename, int err)
{
    struct stat path_stat;
    stat(filename, &path_stat);

    switch (err) {
    case EACCES:
        fprintf(stderr, "%s: Permission denied\n", filename);
        return (84);
        break;
    case ENOENT:
        fprintf(stderr, "%s: No such file or directory\n", filename);
        return (84);
        break;
    default:
        if (S_ISREG(path_stat.st_mode) == 0) {
            fprintf(stderr, "%s: Is directory\n", filename);
            return (84);
        }
        break;
    }
    return (0);
}