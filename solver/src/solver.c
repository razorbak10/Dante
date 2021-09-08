/*
** EPITECH PROJECT, 2019
** dante
** File description:
** solver
*/
#include "solver.h"

int init_solver(char *filename)
{
    int orig[MAX][MAX];
    int maze[MAX][MAX];
    int sol[MAX][MAX];
    int w = 0;
    int h = 0;
    char line[MAX];
    char line2[MAX];
    FILE *fp = fopen(filename, "r");
    FILE *fp2;

    if (errno_parser(filename, errno) == 84)
        return 84;

    while (fscanf(fp, "%s", line) > 0) {
        w = strlen(line);
        for (int i = 0; i < w; i++) {
            if (line[i] == 'X')
            orig[h][i] = line[i];
        }
        h++;
    }
    fclose(fp);

    w = 0;
    h = 0;
    fp2 = fopen(filename, "r");

    while (fscanf(fp2, "%s", line2) > 0) {
        w = strlen(line2);
        for (int i = 0; i < w; i++) {
            if (line2[i] == 'X')
                maze[h][i] = 1;
            else
                maze[h][i] = 0;

            sol[h][i] = 0;
        }
        h++;
    }

    if (solve(maze, sol, w, h, 0, 1))
        print_solution(orig, sol, w, h);
    else
        printf("no solution found\n");

    fclose(fp2);
    return (0);
}

int solve(int maze[MAX][MAX], int sol[MAX][MAX], int w, int h, int x, int y)
{
    if (x == w - 1 && y == h - 2) {
        sol[x][y] = 1;
        return (1);
    }

    if (x >= 0 && y >= 0 && y < w && x < h && maze[x][y] == 0 && sol[x][y] == 0) {
        sol[x][y] = 1;

        if (solve(maze, sol, w, h, x, y - 1))
            return (1);
        if (solve(maze, sol, w, h, x, y + 1))
            return (1);
        if (solve(maze, sol, w, h, x + 1, y))
            return (1);
        if (solve(maze, sol, w, h, x - 1, y))
            return (1);
        sol[x][y] = 0;
        return (0);
    }

    return (0);
}

void print_solution(int orig[MAX][MAX], int sol[MAX][MAX], int w, int h)
{
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (sol[i][j] == 1 && orig[i][j] != 'X') {
                printf("o");
                continue;
            }
            if (orig[i][j] == 'X') {
                printf("X");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}