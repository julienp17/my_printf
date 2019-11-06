/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Format specifier structure
*/

#ifndef __DEF_FS__
    #define __DEF_FS__

    #include <stdarg.h>
    #include <stdbool.h>

    #define FORMATS_ID        "bcdisS%o"
    #define FORMATS_ID_NB     8

    #define UNKNOWN_ID_MSG    "Unknown format identifer\n"

    typedef struct format_id {
        char symbol;
        char* (*convertion)(va_list args);
    } format_id_t;

    bool my_is_format_id(char my_char);
    format_id_t my_get_format_id(char my_char);

#endif