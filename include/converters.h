/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for conversion specifiers
*/

#ifndef CONVERTERS_H_
    #define CONVERTERS_H_

    #include <stdarg.h>

    #define CONVERTERS_SPECIFIERS             "bcdisSuxX%opP"
    #define CONVERTERS_SPECIFIERS_NB          13
    #define INT_CONVERTERS                    "diouxX"
    #define SIGNED_INT_CONVERTERS             "di"
    #define UNSIGNED_INT_CONVERTERS           "ouxX"

    typedef struct converter_specifier {
        char symbol;
        char* (*convertion)(va_list args);
    } converter_t ;

    converter_t my_get_converter_specifier(char my_char);
#endif