/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_minus_sign_convertion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_minus_flag_convertion, basic_usage, .init = cr_redirect_stdout)
{
    unsigned int nb = 42;
    char const expected[] = "[42        ]";

    my_printf("[%-10u]", nb);
    cr_assert_stdout_eq_str(expected);
}

Test(my_minus_flag_convertion, with_zero_flag, .init = cr_redirect_stdout)
{
    unsigned int nb = 42;
    char const expected[] = "[42        ]";

    my_printf("[%-010u]", nb);
    cr_assert_stdout_eq_str(expected);
}