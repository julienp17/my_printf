/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Reproduce the printf function from the C library, respecting C99 standard
*/

#include <stdarg.h>
#include <stddef.h>
#include "my.h"
#include "format_id.h"

int print_token(char const *format, int *i, va_list args);
void print_type(char const my_char, va_list args);

int my_printf(char const *format, ...)
{
    va_list args;

    va_start(args, format);
    for (int i = 0 ; format[i] ; i = i + 1)
        if (print_token(format, &i, args) == MY_EXIT_FAILURE)
            return (MY_EXIT_FAILURE);
    va_end(args);
    return (0);
}

int print_token(char const *format, int *i, va_list args)
{
    if (format[*i] == '%') {
        if (my_is_format_id(format[(*i + 1)])) {
            print_type(format[(*i + 1)], args);
            *i = *i + 1;
        } else {
            my_puterr(UNKNOWN_ID_MSG);
            return (MY_EXIT_FAILURE);
        }
    } else
        my_putchar(format[*i]);
    return (MY_EXIT_SUCCESS);
}

void print_type(char const my_char, va_list args)
{
    char *str = NULL;
    format_id_t id;

    id = my_get_format_id(my_char);
    str = id.convertion(args);
    my_putstr(str);
}