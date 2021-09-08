/*
** EPITECH PROJECT, 2019
** dante
** File description:
** header
*/
#include <stdio.h>
#include <string.h>
#include <errno.h>

#define ERR_NOT_ENOUGH_ARGS 1
#define MAX 100


int error(int error);
int errno_parser(char *filename, int err);
int init_solver(char *filename);
void print_solution(int org[MAX][MAX], int sol[MAX][MAX], int width, int height);
int solve(int maze[MAX][MAX], int sol[MAX][MAX], int w, int h, int x, int y);