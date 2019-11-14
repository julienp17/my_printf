/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format structure
*/

#include <stddef.h>
#include <stdarg.h>
#include "length_modifiers.h"
#include "converters.h"
#include "my.h"

static char *(*get_ll_convertion(char symbol))(va_list args);

char *(*my_get_length_modifier(char *str, converter_t converter))(va_list)
{
    char *(*convertion)(va_list) = NULL;

    if (!my_is_int_converter(converter.symbol))
        return (NULL);
    str = my_revstr(str);
    if (str[0] == 'h') {
        convertion = converter.convertion;
    } else if (str[0] == 'l') {
        if (my_is_int_signed_converter(converter.symbol))
            convertion = &my_llint_conversion;
        else if (my_is_int_unsigned_converter(converter.symbol))
            return (get_ll_convertion(converter.symbol));
    }
    return (convertion);
}

static char *(*get_ll_convertion(char symbol))(va_list)
{
    char *(*convertion)(va_list) = NULL;

    switch (symbol) {
    case 'u':
        convertion = &my_lluint_to_strnum;
        break;
    case 'o':
        convertion = &my_lluint_to_octal;
        break;
    case 'x':
        convertion = &my_lluint_to_hexa_lower;
        break;
    case 'X':
        convertion = &my_lluint_to_hexa_upper;
        break;
    }
    return (convertion);
}