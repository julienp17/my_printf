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
#include "flags.h"
#include "length_modifiers.h"

#include <stdio.h>

int my_print_tokens(char **format_string, va_list args);
char *my_get_formatted_string(char *format, va_list args);
char *my_get_format(char const *format_string);
char *(*my_get_length_modifier(char *str, char const converter))(va_list args);

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

int my_print_tokens(char **format_string, va_list args)
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

char *my_get_format(char const *format_string)
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

char *my_get_formatted_string(char *format, va_list args)
{
    char *formatted_string = malloc(sizeof(char) * (my_strlen(format) + 6));
    converter_t converter;
    char *(*length_modifier)(va_list);

    if (!my_is_converter(format[my_strlen(format) - 1]))
        return (format);
    format = format + 1;
    converter = my_get_converter_specifier(format[my_strlen(format) - 1]);
    format[my_strlen(format) - 1] = '\0';
    if (!format[0])
        return (converter.convertion(args));
    length_modifier = my_get_length_modifier(format, converter.symbol);
    if (length_modifier)
        return (length_modifier(args));
    return (formatted_string);
}