/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Header file for my_printf flags
*/

#ifndef FLAGS_H_
    #define FLAGS_H_

    #include <stdbool.h>
    #include "format.h"

    #define FLAGS                          "#0- +"
    #define FLAGS_NB                       5

    typedef struct flag {
        char symbol;
        void (*convertion)(format_t *format, char *converted,
                            char **flags_output);
    } flag_t ;

    typedef struct hash_flag {
        char symbol;
        char *to_put;
    } hash_flag_t;

    bool my_is_flag(char const my_char);
    flag_t *my_get_flag(char const symbol);

    void my_hash_flag_convertion(format_t *, char *, char **);
    void my_space_flag_convertion(format_t *, char *, char **);
    void my_zero_flag_convertion(format_t *, char *, char **);
    void my_minus_flag_convertion(format_t *, char *, char **);
    void my_plus_flag_convertion(format_t *, char *, char **);
#endif