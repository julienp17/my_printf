/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for my_printf length modifiers
*/

#ifndef LENGTH_MODIFIERS_H_
    #define LENGTH_MODIFIERS_H_

    #define LENGTH_MODIFIERS_NB            4

    typedef struct length_modifier {
        char *symbols;
        char *(*convertion)(char converter_specifier_symbol);
    } length_modifier_t;
#endif