/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for pointers convertion to hexadecimal lower
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_ptr_to_hexa_lower, null_ptr, .init = cr_redirect_stdout)
{
    char *ptr = NULL;
    char expected[] = "(nil)";

    my_printf("%p", ptr);
    cr_assert_stdout_eq_str(expected);
}