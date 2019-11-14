/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_str_isnum_neg
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isnum_neg, basic_usage)
{
    char str[] = "-84";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, pos_nb)
{
    char str[] = "42";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, int_max)
{
    char str[] = "2147483647";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, only_nega_sign)
{
    char str[] = "-";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, all_alpha_neg_sign_at_beginning)
{
    char str[] = "-alpha";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, int_min)
{
    char str[] = "-2147483648";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, only_zero)
{
    char str[] = "0";
    bool actual = false;
    bool expected = false;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}

Test(my_str_isnum_neg, nega_zero)
{
    char str[] = "-0";
    bool actual = false;
    bool expected = true;

    actual = my_str_isnum_neg(str);
    cr_assert_eq(actual, expected);
}