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

Test(my_decimal_to_hexa, zero, .init = cr_redirect_stdout)
{
    unsigned int decimal = 0;
    char expected[] = "0";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, one, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1;
    char expected[] = "1";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, ten, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10;
    char expected[] = "a";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, fifteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 15;
    char expected[] = "f";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, sixteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 16;
    char expected[] = "10";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, twenty_six, .init = cr_redirect_stdout)
{
    unsigned int decimal = 26;
    char expected[] = "1a";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, one_hundred, .init = cr_redirect_stdout)
{
    unsigned int decimal = 100;
    char expected[] = "64";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, one_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1000;
    char expected[] = "3e8";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, ten_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10000;
    char expected[] = "2710";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, int_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    char expected[] = "7fffffff";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, int_max_p_1, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    decimal = decimal + 1;
    char expected[] = "80000000";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa, uint_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = UINT_MAX;
    char expected[] = "ffffffff";

    my_printf("%x", decimal);
    cr_assert_stdout_eq_str(expected);
}