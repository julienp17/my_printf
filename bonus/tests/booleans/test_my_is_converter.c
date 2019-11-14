/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_is_converter
*/

#include <stdbool.h>
#include <criterion/criterion.h>

bool my_is_converter(char my_char);

Test(my_is_converter, char_id)
{
    char my_char = 'c';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, int_id_d)
{
    char my_char = 'd';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, int_id_i)
{
    char my_char = 'i';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, str_id)
{
    char my_char = 's';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, non_printable_str_id)
{
    char my_char = 'S';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, percentage_id)
{
    char my_char = '%';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, binary_id)
{
    char my_char = 'b';
    bool actual = 0;
    bool expected = true;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}

Test(my_is_converter, not_an_id)
{
    char my_char = ';';
    bool actual = true;
    bool expected = false;

    actual = my_is_converter(my_char);
    cr_assert_eq(actual, expected);
}