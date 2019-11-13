/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_percentage_to_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_percentage_to_str, basic_usage, .init = cr_redirect_stdout)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}