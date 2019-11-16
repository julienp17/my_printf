/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_hash_convertion
*/

#include "format.h"
#include "my.h"

void my_hash_flag_convertion(format_t *format, char **converted,
                            char **flags_output)
{
    (void)flags_output;
    if (format->converter->symbol == 'o' && my_strcmp(*converted, "0") != 0)
        (*converted) = my_strcat("0", (*converted));
    if (format->converter->symbol == 'x' && my_strcmp(*converted, "0") != 0)
        (*converted) = my_strcat("0x", (*converted));
    if (format->converter->symbol == 'X' && my_strcmp(*converted, "0") != 0)
        (*converted) = my_strcat("0X", (*converted));
}