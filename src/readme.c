/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-107transfer-gilbert.badiabo
** File description:
** readme.c
*/

#include "../include/transfer.h"

int readme(void)
{
    write(1, "USAGE\n    ", 11);
    write(1, "./107transfer [num den]*\n\n", 27);
    write(1, "DESCRIPTION\n    ", 17);
    write(1, "num     polynomial numerator defined by its coefficients\n", 58);
    write(1, "    den", 8);
    write(1, "     polynomial denominator defined by its coefficients\n", 57);

    return 0;
}