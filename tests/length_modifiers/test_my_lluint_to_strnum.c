/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for unsigned numbers
*/

#include <stddef.h>
#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_lluint_to_strnum, zero, .init = cr_redirect_stdout)
{
    long long unsigned int number = 0LL;
    char expected[] = "0";

    my_printf("%llu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_lluint_to_strnum, one, .init = cr_redirect_stdout)
{
    long long unsigned int number = 1LL;
    char expected[] = "1";

    my_printf("%llu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_lluint_to_strnum, lluint_max, .init = cr_redirect_stdout)
{
    long long unsigned int number = ULLONG_MAX;
    char expected[] = "18446744073709551615";

    my_printf("%llu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_lluint_to_strnum, uint_max, .init = cr_redirect_stdout)
{
    long long unsigned int number = UINT_MAX;
    char expected[] = "4294967295";

    my_printf("%llu", number);
    cr_assert_stdout_eq_str(expected);
}