/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format structure
*/

#include "converters.h"
#include "my.h"

converter_t my_get_converter_specifier(char my_char)
{
    int i = 0;
    converter_t const converters[] = {
        {'b', &my_decimal_to_binary},
        {'c', &my_char_to_str},
        {'d', &my_int_to_strnum}, {'i', &my_int_to_strnum},
        {'s', &my_arg_to_str},
        {'S', &my_np_to_str},
        {'u', &my_uint_to_strnum},
        {'o', &my_decimal_to_octal},
        {'x', &my_decimal_to_hexa_lower}, {'X', &my_decimal_to_hexa_upper},
        {'p', &my_ptr_to_hexa_lower}, {'P', &my_ptr_to_hexa_upper},
        {'%', &my_percentage_to_str}
    };

    while (i < CONVERTERS_SPECIFIERS_NB && my_char != converters[i].symbol)
        i = i + 1;
    return (converters[i]);
}