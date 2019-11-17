/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for ll length modifier
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_ll_length_modifier, zero, .init = cr_redirect_stdout)
{
    long long int number = 0LL;
    char const expected[] = "0";

    my_printf("%lld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, fourty_two_l, .init = cr_redirect_stdout)
{
    long long int number = 42LL;
    char const expected[] = "42";

    my_printf("%lli", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, neg_eighty_four, .init = cr_redirect_stdout)
{
    long long int number = -84LL;
    char const expected[] = "-84";

    my_printf("%lld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, long_int_min, .init = cr_redirect_stdout)
{
    long long int number = LLONG_MIN;
    char const expected[] = "-9223372036854775808";

    my_printf("%lld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, long_int_max, .init = cr_redirect_stdout)
{
    long long int number = LLONG_MAX;
    char const expected[] = "9223372036854775807";

    my_printf("%lli", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, uzero, .init = cr_redirect_stdout)
{
    long long unsigned int number = 0LL;
    char const expected[] = "0";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, ufort_two, .init = cr_redirect_stdout)
{
    long long unsigned int number = 42LL;
    char const expected[] = "42";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_ll_length_modifier, ulong_int_max, .init = cr_redirect_stdout)
{
    long long unsigned int number = ULLONG_MAX;
    char const expected[] = "18446744073709551615";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}