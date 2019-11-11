/*
** EPITECH PROJECT, 2019
** C Pool Day 08
** File description:
** Duplicates a string
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest = 0;

    while (src[i] != '\0')
        i = i + 1;
    dest = malloc((i * sizeof(char)) + 1);
    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
