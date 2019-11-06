/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_strcat
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcat, empty_dest)
{
    char dest[6] = "\0\0\0\0\0\0";
    char src[] = "hello";
    char *actual = malloc(sizeof(char) * (6));
    char expected[] = "hello";

    actual = my_strcat(dest, src);
    cr_assert_str_eq(actual, expected);
}

Test(my_strcat, basic_usage)
{
    char dest[10] = "hel\0\0\0\0\0";
    char src[] = "lo";
    char *actual = malloc(sizeof(char) * (10));
    char expected[] = "hello";

    actual = my_strcat(dest, src);
    cr_assert_str_eq(actual, expected);
}