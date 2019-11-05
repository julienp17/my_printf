/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf main file
*/

/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

int my_printf(char const *format, ...)
{
    int i = 0;
    va_list args;

    va_start(args, format);
    while (format[i]) {
        if (format[i] == '%') {
            print_type(format[(i + 1)], args);
            i = i + 1;
        } else
            my_putchar(format[i]);
        i = i + 1;
    }
    va_end(args);
    return (0);
}

void print_type(char const my_char, va_list args)
{
    int my_int = 0;
    //float my_float = 0.0;
    //double my_double = 0.0;

    if (my_char == 'd') {
        my_int = va_arg(args, int);
        my_put_nbr(my_int);
    }
    if (my_char == '%')
        my_putchar('%');
    /*if (my_char == 'f' || my_char == 'd') {
        my_double = va_arg(args, double);
        my_put_float(my_float);
    }*/
}