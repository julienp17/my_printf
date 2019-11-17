/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_printf with no variadic arguments
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf_special_cases, no_args_hello_world, .init = cr_redirect_stdout)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf_special_cases, no_args_one_char, .init = cr_redirect_stdout)
{
    my_printf("h");
    cr_assert_stdout_eq_str("h");
}

Test(my_printf_special_cases, no_args_one_newline, .init = cr_redirect_stdout)
{
    my_printf("\n");
    cr_assert_stdout_eq_str("\n");
}

Test(my_printf_special_cases, format_not_found, .init = cr_redirect_stdout)
{
    my_printf("hey this is my number : %-014.16hh");
    cr_assert_stdout_eq_str("hey this is my number : %-014.16hh");
}

Test(my_printf_special_cases, unknown_flag, .init = cr_redirect_stdout)
{
    int nb = 42;

    my_printf("hey this is my number : %- v+14.16hhd", nb);
    cr_assert_stdout_eq_str("hey this is my number : %- v+14.16hhd");
}

Test(my_printf_special_cases, incorrect_precision, .init = cr_redirect_stdout)
{
    int nb = 42;

    my_printf("hey this is my number : %.vd", nb);
    cr_assert_stdout_eq_str("hey this is my number : %.vd");
}

Test(my_printf_special_cases, percentage_flag, .init = cr_redirect_stdout)
{
    my_printf("hey this is my percentage : %+- 18.16hh%");
    cr_assert_stdout_eq_str("hey this is my percentage : %");
}

Test(my_printf_special_cases, width_field, .init = cr_redirect_stdout)
{
    int nb = 42;

    my_printf("%0+9d", nb);
    cr_assert_stdout_eq_str("+00000042");
}

Test(my_printf_special_cases, zero_flag_w_precision, .init = cr_redirect_stdout)
{
    int nb = 42;

    my_printf("%0.2d", nb);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf_special_cases, zero_flag_no_int_conv, .init = cr_redirect_stdout)
{
    char const str[] = "hello";

    my_printf("%0s", str);
    cr_assert_stdout_eq_str(str);
}