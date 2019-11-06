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

Test(my_decimal_to_octal, zero, .init = cr_redirect_stdout)
{
    unsigned int decimal = 0;
    char expected[] = "0";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, one, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1;
    char expected[] = "1";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, seven, .init = cr_redirect_stdout)
{
    unsigned int decimal = 7;
    char expected[] = "7";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, eight, .init = cr_redirect_stdout)
{
    unsigned int decimal = 8;
    char expected[] = "10";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, ten, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10;
    char expected[] = "12";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, one_hundred, .init = cr_redirect_stdout)
{
    unsigned int decimal = 100;
    char expected[] = "144";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, one_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1000;
    char expected[] = "1750";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, ten_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10000;
    char expected[] = "23420";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, int_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    char expected[] = "17777777777";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, int_max_p_1, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    decimal = decimal + 1;
    char expected[] = "20000000000";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, uint_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = UINT_MAX;
    char expected[] = "37777777777";

    my_printf("%o", decimal);
    cr_assert_stdout_eq_str(expected);
}