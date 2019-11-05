/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for decimal convertion to binary base
*/

#include <stddef.h>
#include <limits.h>
#include <criterion/criterion.h>

char *my_decimal_to_binary(unsigned int decimal);

Test(my_decimal_to_binary, zero)
{
    unsigned int decimal = 0;
    char *binary = NULL;
    char expected[] = "0";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, one)
{
    unsigned int decimal = 1;
    char *binary = NULL;
    char expected[] = "1";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, two)
{
    unsigned int decimal = 2;
    char *binary = NULL;
    char expected[] = "10";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, three)
{
    unsigned int decimal = 3;
    char *binary = NULL;
    char expected[] = "11";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, ten)
{
    unsigned int decimal = 10;
    char *binary = NULL;
    char expected[] = "1010";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, one_hundred)
{
    unsigned int decimal = 100;
    char *binary = NULL;
    char expected[] = "1100100";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, one_thousand)
{
    unsigned int decimal = 1000;
    char *binary = NULL;
    char expected[] = "1111101000";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, ten_thousand)
{
    unsigned int decimal = 10000;
    char *binary = NULL;
    char expected[] = "10011100010000";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}

Test(my_decimal_to_binary, unsigned_int_max)
{
    unsigned int decimal = UINT_MAX;
    char *binary = NULL;
    char expected[] = "11111111111111111111111111111111";

    binary = my_decimal_to_binary(decimal);
    cr_assert_str_eq(binary, expected);
}