/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for decimal convertion to binary base
*/

#include <stddef.h>
#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_decimal_to_binary, zero, .init = cr_redirect_stdout)
{
    unsigned int decimal = 0;
    char expected[] = "0";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, one, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1;
    char expected[] = "1";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, two, .init = cr_redirect_stdout)
{
    unsigned int decimal = 2;
    char expected[] = "10";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, three, .init = cr_redirect_stdout)
{
    unsigned int decimal = 3;
    char expected[] = "11";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, ten, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10;
    char expected[] = "1010";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, one_hundred, .init = cr_redirect_stdout)
{
    unsigned int decimal = 100;
    char expected[] = "1100100";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, one_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1000;
    char expected[] = "1111101000";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, ten_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10000;
    char expected[] = "10011100010000";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_binary, uint_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = UINT_MAX;
    char expected[] = "111111111111111111111111111111111";

    my_printf("%b", decimal);
    cr_assert_stdout_eq_str(expected);
}
