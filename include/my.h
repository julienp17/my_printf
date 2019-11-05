/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for libmy.a
*/

#ifndef __DEF_MY__
    #define __DEF_MY__

    #include <stdarg.h>

    #define MY_EXIT_SUCCESS     0
    #define MY_EXIT_FAILURE     84

    void my_putchar(char my_char);
    void my_putstr(char const *str);

    int my_printf(const char *restrict format, ...);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);

    char *my_revstr(char *str);
    char *my_int_to_strnum(int nb);
#endif