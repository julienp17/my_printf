/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Converts an integer into a numerical string
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include <stdio.h>
char *my_uint_to_strnum(va_list args)
{
    unsigned int nb = 0;
    nb = va_arg(args, unsigned int);
    int len = my_intlen(nb);
    char *strnum = malloc(sizeof(char) * (len + 1));

    //printf("unsigned number = %d\n", nb);
    for (int i = 0 ; nb != 0 ; i = i + 1) {
        strnum[i] = nb % 10 + '0';
        nb = nb / 10;
    }
    strnum[len] = '\0';
    return (my_revstr(strnum));
}
