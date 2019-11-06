/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format structure
*/

#include <stdbool.h>
#include "format_id.h"
#include "my.h"

int my_strlen(char const *str);

bool my_is_format_id(char my_char)
{
    char const symbols[] = FORMATS_ID;

    for (int i = 0 ; i < my_strlen(symbols) ; i = i + 1)
        if (my_char == symbols[i])
            return (true);
    return (false);
}

format_id_t my_get_format_id(char my_char)
{
    format_id_t const formats[] = {
        {'b', &my_decimal_to_binary},
        {'c', &my_char_to_str},
        {'d', &my_int_to_strnum}, {'i', &my_int_to_strnum},
        {'s', &my_arg_to_str},
        {'S', &my_np_to_str},
        {'%', &my_percentage_to_str},
        {'o', &my_decimal_to_octal}
    };

    for (int i = 0 ; i < FORMATS_ID_NB ; i = i + 1)
        if (my_char == formats[i].symbol)
            return (formats[i]);
    return (formats[5]);
}