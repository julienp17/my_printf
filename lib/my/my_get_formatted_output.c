/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Get flags
*/

#include <stdio.h>
#include <stdlib.h>
#include "format.h"
#include "flags.h"
#include "my.h"

static char *init_formatted_output(format_t *format, char const *converter);

char *my_get_formatted_output(format_t *format, va_list args)
{
    char *converted = format->converter->convertion(args);
    char *formatted_output = init_formatted_output(format, converted);
    flag_t *flag;
    unsigned int i = 0;

    while (format->format[i] != '\0' && format->format[i] != 1) {
        if (!my_is_flag(format->format[i]))
            return (format->org_format);
        flag = my_get_flag(format->format[i]);
        flag->convertion(format, &converted, &formatted_output);
        i++;
    }
    if (format->is_right_padded)
        return (my_strcat(formatted_output, converted));
    return (my_strcat(converted, formatted_output));
}

static char *init_formatted_output(format_t *format, char const *converter)
{
    unsigned int i = 0;
    unsigned int len = my_strlen(converter) + format->width + 2;
    char *formatted_output = malloc(sizeof(char) * len);

    while (i < format->width) {
        formatted_output[i] = ' ';
        i++;
    }
    formatted_output[i] = '\0';
    return (formatted_output);
}