/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_printf with no variadic arguments
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf_no_args, hello_world, .init = cr_redirect_stdout)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf_no_args, one_char_in_str, .init = cr_redirect_stdout)
{
    my_printf("h");
    cr_assert_stdout_eq_str("h");
}

Test(my_printf_no_args, one_newline_in_str, .init = cr_redirect_stdout)
{
    my_printf("\n");
    cr_assert_stdout_eq_str("\n");
}