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

Test(my_decimal_to_hexa_upper, zero, .init = cr_redirect_stdout)
{
    unsigned int decimal = 0;
    char expected[] = "0";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, one, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1;
    char expected[] = "1";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, ten, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10;
    char expected[] = "A";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, fifteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 15;
    char expected[] = "F";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_octal, sixteen, .init = cr_redirect_stdout)
{
    unsigned int decimal = 16;
    char expected[] = "10";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, twenty_six, .init = cr_redirect_stdout)
{
    unsigned int decimal = 26;
    char expected[] = "1A";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, one_hundred, .init = cr_redirect_stdout)
{
    unsigned int decimal = 100;
    char expected[] = "64";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, one_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 1000;
    char expected[] = "3E8";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, ten_thousand, .init = cr_redirect_stdout)
{
    unsigned int decimal = 10000;
    char expected[] = "2710";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, int_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    char expected[] = "7FFFFFFF";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, int_max_p_1, .init = cr_redirect_stdout)
{
    unsigned int decimal = INT_MAX;
    decimal = decimal + 1;
    char expected[] = "80000000";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_decimal_to_hexa_upper, uint_max, .init = cr_redirect_stdout)
{
    unsigned int decimal = UINT_MAX;
    char expected[] = "FFFFFFFF";

    my_printf("%X", decimal);
    cr_assert_stdout_eq_str(expected);
}