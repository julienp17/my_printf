/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_get_flag
*/

#include <criterion/criterion.h>
#include "flags.h"
#include "my.h"

Test(my_get_flag, hash_symbol)
{
    char const symbol = '#';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_not_null(flag);
    cr_assert_eq(flag->symbol, symbol);
    cr_assert_eq(flag->convertion, &my_hash_flag_convertion);
}

Test(my_get_flag, space_symbol)
{
    char const symbol = ' ';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_not_null(flag);
    cr_assert_eq(flag->symbol, symbol);
    cr_assert_eq(flag->convertion, &my_space_flag_convertion);
}

Test(my_get_flag, plus_symbol)
{
    char const symbol = '+';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_not_null(flag);
    cr_assert_eq(flag->symbol, symbol);
    cr_assert_eq(flag->convertion, &my_plus_flag_convertion);
}

Test(my_get_flag, minus_symbol)
{
    char const symbol = '-';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_not_null(flag);
    cr_assert_eq(flag->symbol, symbol);
    cr_assert_eq(flag->convertion, &my_minus_flag_convertion);
}

Test(my_get_flag, zero_symbol)
{
    char const symbol = '0';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_not_null(flag);
    cr_assert_eq(flag->symbol, symbol);
    cr_assert_eq(flag->convertion, &my_zero_flag_convertion);
}

Test(my_get_flag, not_a_flag_symbol)
{
    char const symbol = 'k';
    flag_t *flag = my_get_flag(symbol);

    cr_assert_null(flag);
}