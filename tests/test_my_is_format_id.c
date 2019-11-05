/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_is_format_id
*/

#include <stdbool.h>
#include <criterion/criterion.h>

bool my_is_format_id(char my_char);

Test(my_is_format_id, char_id)
{
    char my_char = 'c';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, int_id_d)
{
    char my_char = 'd';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, int_id_i)
{
    char my_char = 'i';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, str_id)
{
    char my_char = 's';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, non_printable_str_id)
{
    char my_char = 'S';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, percentage_id)
{
    char my_char = '%';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, binary_id)
{
    char my_char = 'b';
    bool actual = 0;
    bool expected = true;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_format_id, not_an_id)
{
    char my_char = ';';
    bool actual = 0;
    bool expected = false;

    actual = my_is_format_id(my_char);
    cr_assert_eq(actual, expected);
}