/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for hash flag convertion
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_hash_flag_convertion, octal_zero, .init = cr_redirect_stdout)
{
    unsigned int octal = 0;
    char const expected[] = "0";

    my_printf("%#o", octal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, octal_42, .init = cr_redirect_stdout)
{
    unsigned int octal = 42;
    char const expected[] = "052";

    my_printf("%#o", octal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, octal_uintmax, .init = cr_redirect_stdout)
{
    unsigned int octal = UINT_MAX;
    char const expected[] = "037777777777";

    my_printf("%#o", octal);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_lower_zero, .init = cr_redirect_stdout)
{
    unsigned int hexa_lower = 0;
    char const expected[] = "0";

    my_printf("%#x", hexa_lower);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_lower_42, .init = cr_redirect_stdout)
{
    unsigned int hexa_lower = 42;
    char const expected[] = "0x2a";

    my_printf("%#x", hexa_lower);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_lower_uintmax, .init = cr_redirect_stdout)
{
    unsigned int hexa_lower = UINT_MAX;
    char const expected[] = "0xffffffff";

    my_printf("%#x", hexa_lower);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_upper_zero, .init = cr_redirect_stdout)
{
    unsigned int hexa_upper = 0;
    char const expected[] = "0";

    my_printf("%#X", hexa_upper);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_upper_42, .init = cr_redirect_stdout)
{
    unsigned int hexa_upper = 42;
    char const expected[] = "0X2A";

    my_printf("%#X", hexa_upper);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, hexa_upper_uintmax, .init = cr_redirect_stdout)
{
    unsigned int hexa_upper = UINT_MAX;
    char const expected[] = "0XFFFFFFFF";

    my_printf("%#X", hexa_upper);
    cr_assert_stdout_eq_str(expected);
}

Test(my_hash_flag_convertion, no_convertion, .init = cr_redirect_stdout)
{
    unsigned int decimal = 84;
    char const expected[] = "84";

    my_printf("%#d", decimal);
    cr_assert_stdout_eq_str(expected);
}