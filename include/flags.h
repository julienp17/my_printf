/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for my_printf flags
*/

#ifndef FLAGS_H_
    #define FLAGS_H_

    #include <stdarg.h>

    #define FLAGS                          "#0- +"
    #define FLAGS_NB                       5

    struct flag {
        char symbol;
        char* (*convertion)(va_list args);
    };

    struct converter_specifier my_get_converter_specifier(char my_char);
#endif