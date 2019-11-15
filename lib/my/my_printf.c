/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Reproduce the printf function in accordance to the C99 standard
*/

#include <stdio.h>

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "converters.h"
#include "length_modifiers.h"

static int my_print_tokens(char **format_string, va_list args);
static char *my_get_formatted_string(char *format, va_list args);
static char *my_get_format(char const *format_string);

int my_printf(char const *str, ...)
{
    va_list args;
    char *format_string = my_strdup(str);
    int chars_written = 0;

    va_start(args, str);
    while (format_string[0])
        chars_written = chars_written + my_print_tokens(&format_string, args);
    va_end(args);
    return (chars_written);
}

static int my_print_tokens(char **format_string, va_list args)
{
    char *format = NULL;
    char *formatted_string = NULL;
    int chars_written = 0;

    if ((*format_string)[0] == '%') {
        format = my_get_format(*format_string);
        (*format_string) = (*format_string) + my_strlen(format);
        formatted_string = my_get_formatted_string(format, args);
        chars_written = chars_written + my_strlen(formatted_string);
        my_putstr(formatted_string);
    } else {
        my_putchar((*format_string)[0]);
        (*format_string) = (*format_string) + 1;
        chars_written = chars_written + 1;
    }
    return (chars_written);
}

static char *my_get_format(char const *format_string)
{
    char *format = malloc(sizeof(char) * (my_strlen(format_string) + 1));
    int i = 0;

    format[0] = '%';
    format_string = format_string + 1;
    while (format_string[i] && !my_is_converter(format_string[i])) {
        format[i + 1] = format_string[i];
        i = i + 1;
    }
    if (my_is_converter(format_string[i])) {
        format[i + 1] = format_string[i];
        i = i + 1;
    }
    format[i + 1] = '\0';
    return (format);
}

static char *my_get_formatted_string(char *org_format, va_list args)
{
    char *format = my_strdup(org_format);
    converter_t *converter;

    if (!my_is_converter(format[my_strlen(format) - 1]))
        return (org_format);
    format = format + 1;
    converter = my_get_converter(&format);
    if (format[0]) {
        printf("\\format = %s\\\n", format);
        return (org_format);
    }
    return (converter->convertion(args));
}