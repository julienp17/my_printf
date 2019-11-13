/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_percentage_to_str
*/

#include <stdbool.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_is_printable, thirty_one)
{
    char const my_char = 31;
    bool actual = false;

    actual = my_is_printable(my_char);
    cr_assert_eq(actual, false);
}

Test(my_is_printable, thirty_two)
{
    char const my_char = 32;
    bool actual = false;

    actual = my_is_printable(my_char);
    cr_assert_eq(actual, true);
}

Test(my_is_printable, printable_char)
{
    char const my_char = 68;
    bool actual = false;

    actual = my_is_printable(my_char);
    cr_assert_eq(actual, true);
}

Test(my_is_printable, one_hundred_twenty_seven)
{
    char const my_char = 127;
    bool actual = false;

    actual = my_is_printable(my_char);
    cr_assert_eq(actual, false);
}