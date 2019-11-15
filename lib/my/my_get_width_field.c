/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Get the width field
*/

#include "my.h"

unsigned int my_get_width_field(char **format)
{
    char *str = my_strdup(*format);
    unsigned int i = 0;

    while (str[i] && !my_is_digit(str[i]))
        i++;
    if (my_is_digit(str[i]) && str[i] == '0') {
        i++;
        while (str[i] && !my_is_digit(str[i]))
            i++;
    }
    if (my_is_digit(str[i])) {
        (*format)[i] = '\0';
        return (my_strnum_to_uint(str + i));
    }
    return (0);
}