/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-107transfer-gilbert.badiabo
** File description:
** check_arg.c
*/

#include "../include/transfer.h"

int check_expression(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '*' && str[i] < '0' || str[i] > '9')
            return 84;
        if (str[i] == '*' && str[i - 1] == '*')
            return 84;
    }
    return 0;
}

int check_arg(int ac, char **av)
{
    if (ac < 3 || (ac - 1) % 2 != 0)
        return 84;
    for (int i = 1; i < ac; i++)
        if (check_expression(av[i]) == 84)
            return 84;
    return 0;
}