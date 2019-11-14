/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for libmy.a
*/

#ifndef __DEF_MY__
    #define __DEF_MY__

    #include <stdarg.h>
    #include <stdbool.h>

    #define MY_EXIT_SUCCESS     0
    #define MY_EXIT_FAILURE     84

    void my_putchar(char my_char);
    void my_putstr(char const *str);
    void my_puterr(char const *str);

    bool my_is_converter(char my_char);
    bool my_is_int_converter(char my_char);
    bool my_is_printable(char const my_char);
    bool my_is_int_converter(char my_char);
    bool my_is_int_signed_converter(char my_char);
    bool my_is_int_unsigned_converter(char my_char);
    bool my_str_isnum(char const *str);
    bool my_str_isnum_pos(char const *str);
    bool my_str_isnum_neg(char const *str);

    int my_printf(const char *restrict format, ...);
    int my_strlen(char const *str);
    int my_intlen(int nb);
    int my_put_nbr(int nb);
    int my_strcmp(char const *s1, char const *s2);

    char *my_revstr(char *str);
    char *my_char_to_octal(char my_char);
    char *my_strcat(char *dest, char const *src);
    char *my_strdup(char const *src);
    char *my_strstr(char const *str, char const *to_find);

    char *my_char_to_str(va_list args);
    char *my_arg_to_str(va_list args);
    char *my_percentage_to_str(va_list args);
    char *my_np_to_str(va_list args);
    char *my_int_to_strnum(va_list arg);
    char *my_uint_to_strnum(va_list arg);
    char *my_decimal_to_binary(va_list args);
    char *my_decimal_to_octal(va_list args);
    char *my_decimal_to_hexa_lower(va_list args);
    char *my_decimal_to_hexa_upper(va_list args);
    char *my_ptr_to_hexa_lower(va_list args);
    char *my_ptr_to_hexa_upper(va_list args);

    char *my_llint_to_strnum(va_list args);
    char *my_lluint_to_strnum(va_list args);
    char *my_lluint_to_octal(va_list args);
    char *my_lluint_to_hexa_lower(va_list args);
    char *my_lluint_to_hexa_upper(va_list args);
#endif