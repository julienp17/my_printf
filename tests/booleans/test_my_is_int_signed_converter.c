/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_is_int_signed_converter
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_is_int_signed_converter, int_d)
{
    char my_char = 'd';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_signed_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_signed_converter, int_i)
{
    char my_char = 'i';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_signed_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_signed_converter, not_a_signed_converter)
{
    char my_char = 'o';
    bool actual = false;
    bool expected = false;

    actual = my_is_int_signed_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_signed_converter, not_a_converter)
{
    char my_char = 'a';
    bool actual = false;
    bool expected = false;

    actual = my_is_int_signed_converter(my_char);
    cr_assert_eq(actual, expected);
}