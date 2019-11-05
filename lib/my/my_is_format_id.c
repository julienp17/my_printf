/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format structure
*/

#include <stdbool.h>

int my_strlen(char const *str);

bool my_is_format_id(char my_char)
{
    char formats[] = "bdicsS%";

    for (int i = 0 ; i < my_strlen(formats) ; i = i + 1)
        if (my_char == formats[i])
            return (true);
    return (false);
}