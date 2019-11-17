/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for hh length modifier
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_hh_length_modifier, zero, .init = cr_redirect_stdout)
{
    char number = 0;
    char expected[] = "0";

    my_printf("%hhd", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, fourty_two, .init = cr_redirect_stdout)
{
    char number = 42;
    char expected[] = "42";

    my_printf("%hhi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, neg_eighty_four, .init = cr_redirect_stdout)
{
    char number = -84;
    char expected[] = "-84";

    my_printf("%hhi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, char_min, .init = cr_redirect_stdout)
{
    char number = CHAR_MIN;
    char expected[] = "-128";

    my_printf("%hhd", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, char_max, .init = cr_redirect_stdout)
{
    char number = CHAR_MAX;
    char expected[] = "127";

    my_printf("%hhi", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, uzero, .init = cr_redirect_stdout)
{
    unsigned char number = 0;
    char expected[] = "0";

    my_printf("%hhu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, uforty_two, .init = cr_redirect_stdout)
{
    unsigned char number = 42;
    char expected[] = "42";

    my_printf("%hhu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hh_length_modifier, uchar_max, .init = cr_redirect_stdout)
{
    unsigned char number = UCHAR_MAX;
    char expected[] = "255";

    my_printf("%hhu", number);
    cr_assert_stdout_eq_str(expected);
}