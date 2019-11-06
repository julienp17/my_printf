/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for decimal convertion to binary base
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_np_to_str, no_np, .init = cr_redirect_stdout)
{
    char str[] = "hello this is normal string talking";
    char expected[] = "hello this is normal string talking";

    my_printf("%S", str);
    cr_assert_stdout_eq_str(expected);
}

Test(my_np_to_str, one_np_char, .init = cr_redirect_stdout)
{
    char str[] = "hello this is normal string talking";
    char expected[] = "hello th\\004s is normal string talking";

    str[8] = 4;
    my_printf("%S", str);
    cr_assert_stdout_eq_str(expected);
}

Test(my_np_to_str, three_np_char, .init = cr_redirect_stdout)
{
    char str[] = "hello this is normal string talking";
    char expected[] = "hello th\\004s is norm\\031l string tal\\137ing";

    str[8] = 4;
    str[18] = 31;
    str[31] = 127;
    my_printf("%S", str);
    cr_assert_stdout_eq_str(expected);
}