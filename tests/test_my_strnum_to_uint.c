/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_strnum_to_uint
*/

#include <limits.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_strnum_to_uint, zero)
{
    char const strnum[] = "0";
    unsigned int actual = 0;
    unsigned int expected = 0;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, nb42)
{
    char const strnum[] = "42";
    unsigned int actual = 0;
    unsigned int expected = 42;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, uint_max)
{
    char const strnum[] = "4294967295";
    unsigned int actual = 0;
    unsigned int expected = 4294967295;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, alpha_str)
{
    char const strnum[] = "alpha";
    unsigned int actual = 0;
    unsigned int expected = 0;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, neg_strnum)
{
    char const strnum[] = "-84";
    unsigned int actual = 0;
    unsigned int expected = 0;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, gt_uint_max_len)
{
    char const strnum[] = "1004294967296";
    unsigned int actual = 0;
    unsigned int expected = 0;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}

Test(my_strnum_to_uint, gt_uint_max)
{
    char const strnum[] = "4294967296";
    unsigned int actual = 0;
    unsigned int expected = 0;

    actual = my_strnum_to_uint(strnum);
    cr_assert_eq(actual, expected);
}