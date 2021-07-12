/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** transfer.h
*/

#ifndef TRANSFER_H_
#define TRANSFER_H_

#include "my.h"
#include <stdio.h>
#include <string.h>

int readme(void);
int check_arg(int ac, char **av);
int check_expression(char *str);
void transfer(int ac, char **av);
char **get_expr(int ac, char **av);
double calc(char *str, double x);

#endif
