/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Converts an unsigned integer into a binary string
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char *my_decimal_to_binary(unsigned int decimal)
{
    char *binary = malloc(sizeof(char) * (32 + 1));
    int digit = 0;

    if (decimal == 0)
        return ("0");
    for (int i = 0 ; decimal > 0 ; i = i + 1) {
        digit = decimal % 2;
        binary[i] = digit + '0';
        decimal = decimal / 2;
    }
    return (my_revstr(binary));
}