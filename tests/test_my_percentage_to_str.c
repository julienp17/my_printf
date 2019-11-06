/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_percentage_to_str
*/

#include <stddef.h>
#include <stdarg.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_percentage_to_str, basic_usage, .init = cr_redirect_stdout)
{
    char str[] = "%%";

    my_printf(str);
    cr_assert_stdout_eq_str(str);
}