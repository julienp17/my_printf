/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Converts an unsigned integer into an hexadecimal lowercase string
*/

#include <stddef.h>
#include <stdlib.h>
#include "bases.h"
#include "my.h"

char *my_decimal_to_hexa_lower(va_list args)
{
    unsigned int decimal = va_arg(args, unsigned int);
    char base[] = HEXA_LOWER;
    char *hexa = malloc(sizeof(char) * (HEXA_MAX_LEN + 1));
    int digit = 0;

    if (decimal == 0)
        return ("0");
    for (int i = 0 ; decimal > 0 ; i = i + 1) {
        digit = decimal % 16;
        hexa[i] = base[digit];
        decimal = decimal / 16;
    }
    return (my_revstr(hexa));
}