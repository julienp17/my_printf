/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for non printable characters convertion to octal base
*/

#include <stddef.h>
#include <limits.h>
#include <criterion/criterion.h>

char *my_char_to_octal(unsigned char my_char);

Test(my_char_to_octal, zero)
{
    unsigned char my_char = 0;
    char *octal = NULL;
    char expected[] = "\\000";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, one)
{
    unsigned char my_char = 1;
    char *octal = NULL;
    char expected[] = "\\001";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, seven)
{
    unsigned char my_char = 7;
    char *octal = NULL;
    char expected[] = "\\007";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, eight)
{
    unsigned char my_char = 8;
    char *octal = NULL;
    char expected[] = "\\010";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, ten)
{
    unsigned char my_char = 10;
    char *octal = NULL;
    char expected[] = "\\012";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, thirty_one)
{
    unsigned char my_char = 31;
    char *octal = NULL;
    char expected[] = "\\037";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}

Test(my_char_to_octal, one_hundred_twenty_seven)
{
    unsigned char my_char = 127;
    char *octal = NULL;
    char expected[] = "\\177";

    octal = my_char_to_octal(my_char);
    cr_assert_str_eq(octal, expected);
}