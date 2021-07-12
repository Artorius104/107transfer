/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-107transfer-gilbert.badiabo
** File description:
** main.c
*/

#include "../include/transfer.h"

int main(int ac, char *av[])
{
    if (ac == 2 && my_strcmp("-h", av[1]) == 0)
        return (readme());
    if (check_arg(ac, av) == 84) {
        write(2, "ERROR ARGUMENTS\n", 17);
        return 84;
    }
    transfer(ac, av);
    return 0;
}
