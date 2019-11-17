/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_is_flag
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_is_flag, hash_flag)
{
    char const my_char = '#';
    bool actual = false;
    bool expected = true;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_flag, zero_flag)
{
    char const my_char = '0';
    bool actual = false;
    bool expected = true;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_flag, space_flag)
{
    char const my_char = ' ';
    bool actual = false;
    bool expected = true;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_flag, minus_flag)
{
    char const my_char = '-';
    bool actual = false;
    bool expected = true;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_flag, plus_flag)
{
    char const my_char = '+';
    bool actual = false;
    bool expected = true;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_flag, not_a_flag)
{
    char const my_char = 'k';
    bool actual = false;
    bool expected = false;

    actual = my_is_flag(my_char);
    cr_assert_eq(actual, expected);
}