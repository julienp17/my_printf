/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for pointers convertion to hexadecimal upper
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_ptr_to_hexa_upper, null_ptr, .init = cr_redirect_stdout)
{
    char *ptr = NULL;
    char expected[] = "(nil)";

    my_printf("%P", ptr);
    cr_assert_stdout_eq_str(expected);
}