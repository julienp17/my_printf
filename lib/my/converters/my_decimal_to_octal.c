/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Converts an unsigned integer into an octal string
*/

#include <stddef.h>
#include <stdlib.h>
#include "bases.h"
#include "my.h"

char *my_decimal_to_octal(va_list args)
{
    unsigned int decimal = va_arg(args, unsigned int);
    char *octal = malloc(sizeof(char) * (OCTAL_UINT_MAX_LEN + 2));
    int digit = 0;

    if (decimal == 0)
        return ("0");
    for (int i = 0 ; decimal > 0 ; i = i + 1) {
        digit = decimal % 8;
        octal[i] = digit + '0';
        decimal = decimal / 8;
    }
    return (my_revstr(octal));
}