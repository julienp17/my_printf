/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for printing strings
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_arg_to_str, basic_usage, .init = cr_redirect_stdout)
{
    char *str = "escape from reality";
    char expected[] = "escape from reality";

    my_printf("%s", str);
    cr_assert_stdout_eq_str(expected);
}

Test(my_arg_to_str, with_static_str, .init = cr_redirect_stdout)
{
    char *str = "escape from reality";
    char expected[] = "mama i just wanna escape from reality";

    my_printf("mama i just wanna %s", str);
    cr_assert_stdout_eq_str(expected);
}