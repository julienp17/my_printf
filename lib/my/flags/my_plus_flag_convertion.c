/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_plus_flag_convertion
*/

#include <stddef.h>
#include "my.h"
#include "format.h"

void my_plus_flag_convertion(format_t *format, char **converted,
                            char **flags_output)
{
    if (my_strstr(format->format, "0") != NULL) {
        (*flags_output)[0] = '+';
        return;
    }
    if (my_is_int_signed_converter(format->converter->symbol))
        if (my_str_isnum_pos(*converted))
            *converted = my_strcat("+", *converted);
}