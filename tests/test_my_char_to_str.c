/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for printing chars
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_char_to_str, basic_usage, .init = cr_redirect_stdout)
{
    char my_char = 'A';
    char expected[] = "A";

    my_printf("%c", my_char);
    cr_assert_stdout_eq_str(expected);
}