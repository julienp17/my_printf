/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for struct format
*/

#ifndef FORMAT_H_
    #define FORMAT_H_

    #include <stdbool.h>
    #include "converters.h"

    typedef struct format {
        char *format;
        char *org_format;
        unsigned int width;
        int precision;
        converter_t *converter;
        bool is_right_padded;
    } format_t;
#endif