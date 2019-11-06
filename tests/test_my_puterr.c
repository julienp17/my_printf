/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_puterr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_puterr, basic_usage, .init = cr_redirect_stderr)
{
    char str[] = "error";

    my_puterr(str);
    cr_assert_stderr_eq_str(str);
}