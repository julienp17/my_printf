/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_space_flag_convertion
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "format.h"

void my_space_flag_convertion(format_t *format, char **converted,
                            char **flags_output)
{
    char *space_sign = NULL;
    (void)flags_output;

    if (my_strstr(format->format, "+") != NULL)
        return;
    if (my_is_int_signed_converter(format->converter->symbol))
        if (my_str_isnum_pos(*converted)) {
            space_sign = malloc(sizeof(char) * 2);
            space_sign[0] = ' ';
            space_sign[1] = '\0';
            *converted = my_strcat(space_sign, *converted);
        }
}