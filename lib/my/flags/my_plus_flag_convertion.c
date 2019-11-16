/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_plus_flag_convertion
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "format.h"

void my_plus_flag_convertion(format_t *format, char **converted,
                            char **flags_output)
{
    char *plus_sign = NULL;

    if (my_strstr(format->format, "0") != NULL) {
        (*flags_output)[0] = '+';
        return;
    }
    if (my_is_int_signed_converter(format->converter->symbol))
        if (my_str_isnum_pos(*converted)) {
            plus_sign = malloc(sizeof(char) * 2);
            plus_sign[0] = '+';
            plus_sign[1] = '\0';
            *converted = my_strcat(plus_sign, *converted);
        }
}