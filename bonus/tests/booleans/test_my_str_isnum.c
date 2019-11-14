/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_str_isnum
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isnum, basic_usage)
{
    char str[] = "42";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, zero)
{
    char str[] = "0";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, neg_zero)
{
    char str[] = "-0";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, int_max)
{
    char str[] = "2147483647";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, int_min)
{
    char str[] = "-2147483648";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, zero_to_nine)
{
    char str[] = "0123456789";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, neg_zero_to_nine)
{
    char str[] = "-0123456789";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, only_zeros)
{
    char str[] = "0000000000";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, only_neg_sign)
{
    char str[] = "-";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, neg_sign_in_middle)
{
    char str[] = "01234-56789";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum, all_alpha)
{
    char str[] = "abcdefghijkl";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum(str);
    cr_assert_eq(actual, expected);
}