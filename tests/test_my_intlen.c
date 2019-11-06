/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_printf with no variadic arguments
*/

#include <limits.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_intlen, zero)
{
    int nb = 0;
    int actual = my_intlen(nb);
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, one)
{
    int nb = 1;
    int actual = my_intlen(nb);
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, neg_one)
{
    int nb = -1;
    int actual = my_intlen(nb);
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, nine)
{
    int nb = 9;
    int actual = my_intlen(nb);
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, neg_nine)
{
    int nb = -9;
    int actual = my_intlen(nb);
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, ten)
{
    int nb = 10;
    int actual = my_intlen(nb);
    int expected = 2;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, neg_ten)
{
    int nb = -10;
    int actual = my_intlen(nb);
    int expected = 2;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, forty_two)
{
    int nb = 42;
    int actual = my_intlen(nb);
    int expected = 2;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, neg_eighthy_four)
{
    int nb = -84;
    int actual = my_intlen(nb);
    int expected = 2;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, int_min)
{
    int nb = INT_MIN;
    int actual = my_intlen(nb);
    int expected = 10;

    cr_assert_eq(actual, expected);
}

Test(my_intlen, int_max)
{
    int nb = INT_MAX;
    int actual = my_intlen(nb);
    int expected = 10;

    cr_assert_eq(actual, expected);
}