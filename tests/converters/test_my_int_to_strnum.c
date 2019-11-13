/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for printing integers
*/

#include <stddef.h>
#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_int_to_strnum, zero, .init = cr_redirect_stdout)
{
    int number = 0;
    char expected[] = "0";

    my_printf("%d", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_int_to_strnum, fourty_two, .init = cr_redirect_stdout)
{
    int number = 42;
    char expected[] = "42";

    my_printf("%i", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_int_to_strnum, neg_eighty_four, .init = cr_redirect_stdout)
{
    int number = -84;
    char expected[] = "-84";

    my_printf("%d", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_int_to_strnum, int_min, .init = cr_redirect_stdout)
{
    int number = INT_MIN;
    char expected[] = "-2147483648";

    my_printf("%i", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_int_to_strnum, int_max, .init = cr_redirect_stdout)
{
    int number = INT_MAX;
    char expected[] = "2147483647";

    my_printf("%i", number);
    cr_assert_stdout_eq_str(expected);
}