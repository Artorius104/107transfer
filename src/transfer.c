/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-107transfer-gilbert.badiabo
** File description:
** transfer.c
*/

#include "../include/transfer.h"

double calc(char *str, double x)
{
    int a = my_strlen(str) - 1;
    int b = my_strlen(str) - 1;
    double res = 0;
    char *buff;

    while (a >= 0) {
    	b = a;
        for (; a >= 0 && str[a] != '*'; a--);
        a++;
        buff = strdup(str + a);
        buff[b - a + 1] = 0;
        res = res * x;
        res = res + atoi(buff);
        a -= 2;
    }
    return res;
}

char **get_expr(int ac, char **av)
{
    char **expr = malloc(sizeof(char *) * (ac - 1));

    for (int i = 0; i < (ac - 1); i++) {
        expr[i] = strdup(av[i + 1]);
        expr[i + 1] = NULL;
    }
    return expr;
}

void transfer(int ac, char **av)
{
    char **expr = get_expr(ac, av);

    for (double x = 0, res = 1; x < 1.001; x += 0.001, res = 1) {
        for (int i = 0; i < (ac - 1); i += 2)
            res = calc(expr[i], x) / calc(expr[i + 1], x) * res;
        printf("%.3f -> %.5f\n", x, res);
    }
}