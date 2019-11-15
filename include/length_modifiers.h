/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for my_printf length modifiers
*/

#ifndef LENGTH_MODIFIERS_H_
    #define LENGTH_MODIFIERS_H_

    #define LENGTH_MODIFIERS_NB            4

    #include "converters.h"

    typedef struct length_modifier {
        char *symbols;
        char *(*convertion)(va_list args);
    } length_modifier_t;

length_modifier_t *my_get_length_modifier(char *str, converter_t *converter);
#endif