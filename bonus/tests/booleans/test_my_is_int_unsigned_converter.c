/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_is_int_unsigned_converter
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_is_int_unsigned_converter, octal)
{
    char my_char = 'o';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, unsigned_int)
{
    char my_char = 'u';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, hexadecimal_lower)
{
    char my_char = 'x';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, hexadecimal_upper)
{
    char my_char = 'X';
    bool actual = false;
    bool expected = true;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, not_an_unsigned_converter_int_d)
{
    char my_char = 'd';
    bool actual = false;
    bool expected = false;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, not_an_unsigned_converter_int_i)
{
    char my_char = 'i';
    bool actual = false;
    bool expected = false;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_int_unsigned_converter, not_a_converter)
{
    char my_char = 'a';
    bool actual = false;
    bool expected = false;

    actual = my_is_int_unsigned_converter(my_char);
    cr_assert_eq(actual, expected);
}