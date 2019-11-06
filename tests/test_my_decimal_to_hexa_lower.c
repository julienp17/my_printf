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

Test(my_decimal_to_hexa_lower, zero, .init = cr_redirect_stdout)
{
    unsigned int decimal = 0;
    char expected[] = "0";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, one, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1;
    char expected[] = "1";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, ten, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10;
    char expected[] = "a";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, fifteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 15;
    char expected[] = "f";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, sixteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 16;
    char expected[] = "10";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, twenty_six, .init = cr_redirect_stdout)
{
    unsigned int decimal = 26;
    char expected[] = "1a";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, one_hundred, .init = cr_redirect_stdout)
{
    unsigned int decimal = 100;
    char expected[] = "64";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, one_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1000;
    char expected[] = "3e8";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, ten_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10000;
    char expected[] = "2710";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, int_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    char expected[] = "7fffffff";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, int_max_p_1, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    decimal = decimal + 1;
    char expected[] = "80000000";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_lower, uint_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = UINT_MAX;
    char expected[] = "ffffffff";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}