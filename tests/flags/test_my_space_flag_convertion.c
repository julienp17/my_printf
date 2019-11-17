/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_plus_sign_convertion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_space_flag_convertion, basic_usage_pos, .init = cr_redirect_stdout)
{
    int number = 42;
    char const expected[] = " 42";

    my_printf("% d", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_space_flag_convertion, basic_usage_neg, .init = cr_redirect_stdout)
{
    int number = -84;
    char const expected[] = "-84";

    my_printf("% d", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_space_flag_convertion, not_signed, .init = cr_redirect_stdout)
{
    unsigned int number = 42;
    char const expected[] = "42";

    my_printf("% u", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_space_flag_convertion, with_width, .init = cr_redirect_stdout)
{
    int number = 42;
    char const expected[] = "[ 42]";

    my_printf("[% 2i]", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_space_flag_convertion, with_plus_flag, .init = cr_redirect_stdout)
{
    int number = 42;
    char const expected[] = "[+42]";

    my_printf("[% +d]", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_space_flag_convertion, with_minus_flag, .init = cr_redirect_stdout)
{
    int number = 42;
    char const expected[] = "[ 0042]";

    my_printf("[% 05i]", number);
    cr_assert_stdout_eq_str(expected);
}