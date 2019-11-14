/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Converts a double to a string
*/

#include <stdarg.h>
#include <stdlib.h>
#include "bases.h"
#include "my.h"

char *my_double_to_str(va_list args)
{
    double nb = va_arg(args, double);
    char *str = malloc(sizeof(char) * (DOUBLE_MAX_LEN + 1));
    int precision = 6;

    str = my_strcpy(str, my_llint_to_strnum((long long int)nb));
    str = my_strcat(str, ".");
    nb = nb - (long long int)nb;
    for (int i = 0 ; i < precision ; i = i + 1)
        nb = nb * 10;
    str = my_strcat(str, my_int_to_strnum((int)nb));
    return (str);
}
