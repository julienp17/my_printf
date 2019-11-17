/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_str_isnum_pos
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isnum_pos, basic_usage)
{
    char str[] = "42";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, neg_nb)
{
    char str[] = "-84";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, int_max)
{
    char str[] = "2147483647";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, int_min)
{
    char str[] = "-2147483648";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, all_alpha)
{
    char str[] = "alpha";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, only_zero)
{
    char str[] = "0";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, nega_zero)
{
    char str[] = "-0";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_pos, empty_str)
{
    char str[] = "";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_pos(str);
    cr_assert_eq(actual, expected);
}