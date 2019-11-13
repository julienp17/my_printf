/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for printing long long integers
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_llint_to_strnum, zero, .init = cr_redirect_stdout)
{
    long long int number = 0LL;
    char expected[] = "0";

    my_printf("%lld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_llint_to_strnum, fourty_two, .init = cr_redirect_stdout)
{
    long long int number = 42LL;
    char expected[] = "42";

    my_printf("%lli", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_llint_to_strnum, neg_eighty_four, .init = cr_redirect_stdout)
{
    long long int number = -84LL;
    char expected[] = "-84";

    my_printf("%lld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_llint_to_strnum, llint_min, .init = cr_redirect_stdout)
{
    long long int number = LLONG_MIN;
    char expected[] = "-9223372036854775808";

    my_printf("%lli", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_llint_to_strnum, llint_max, .init = cr_redirect_stdout)
{
    long long int number = LLONG_MAX;
    char expected[] = "9223372036854775807";

    my_printf("%lli", number);
    cr_assert_stdout_eq_str(expected);
}