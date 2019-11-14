/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Displays the characters of a string.
*/

#include <unistd.h>

int my_puterr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i = i + 1;
    }
    return (0);
}
