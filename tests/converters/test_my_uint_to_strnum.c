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

Test(my_uint_to_strnum, zero, .init = cr_redirect_stdout)
{
    unsigned int number = 0;
    char expected[] = "0";

    my_printf("%u", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_uint_to_strnum, one, .init = cr_redirect_stdout)
{
    unsigned int number = 1;
    char expected[] = "1";

    my_printf("%u", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_uint_to_strnum, int_max, .init = cr_redirect_stdout)
{
    unsigned int number = INT_MAX;
    char expected[] = "2147483647";

    my_printf("%u", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_uint_to_strnum, int_max_p_1, .init = cr_redirect_stdout)
{
    unsigned int number = INT_MAX;
    number = number + 1;
    char expected[] = "2147483648";

    my_printf("%u", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_uint_to_strnum, uint_max, .init = cr_redirect_stdout)
{
    unsigned int number = UINT_MAX;
    char expected[] = "4294967295";

    my_printf("%u", number);
    cr_assert_stdout_eq_str(expected);
}