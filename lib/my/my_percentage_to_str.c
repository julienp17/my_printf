/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Returns a string with only '%' in it
*/

#include <stdarg.h>
#include <stddef.h>

char *my_percentage_to_str(va_list args)
{
    if (args == NULL)
        return (NULL);
    return ("%");
}