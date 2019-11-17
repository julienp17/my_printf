/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for h length modifier
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_h_length_modifier, zero, .init = cr_redirect_stdout)
{
    short int number = 0;
    char expected[] = "0";

    my_printf("%hd", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, fourty_two, .init = cr_redirect_stdout)
{
    short int number = 42;
    char expected[] = "42";

    my_printf("%hi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, neg_eighty_four, .init = cr_redirect_stdout)
{
    short int number = -84;
    char expected[] = "-84";

    my_printf("%hi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, short_int_min, .init = cr_redirect_stdout)
{
    short int number = SHRT_MIN;
    char expected[] = "-32768";

    my_printf("%hd", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, short_int_max, .init = cr_redirect_stdout)
{
    short int number = SHRT_MAX;
    char expected[] = "32767";

    my_printf("%hi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, uzero, .init = cr_redirect_stdout)
{
    short unsigned int number = 0;
    char expected[] = "0";

    my_printf("%hu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, uforty_two, .init = cr_redirect_stdout)
{
    short unsigned int number = 42;
    char expected[] = "42";

    my_printf("%hu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_h_length_modifier, ushort_max, .init = cr_redirect_stdout)
{
    short unsigned int number = USHRT_MAX;
    char expected[] = "65535";

    my_printf("%hd", number);
    cr_assert_stdout_eq_str(expected);
}