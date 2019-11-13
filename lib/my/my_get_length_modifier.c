/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format structure
*/

#include <stddef.h>
#include <stdarg.h>
#include "length_modifiers.h"
#include "my.h"

char *(*my_get_length_modifier(char *str, char const converter))(va_list args)
{
    char *(*convertion)(va_list) = NULL;

    if (!my_is_int_converter(converter))
        return (NULL);
    str = my_revstr(str);
    if (str[0] == 'h') {
        convertion = &my_int_to_strnum;
    } else if (str[0] == 'l') {
        if (my_is_int_signed_converter(converter))
            convertion = &my_llint_to_strnum;
        else if (my_is_int_unsigned_converter(converter))
            convertion = &my_lluint_to_strnum;
    }
    return (convertion);
}