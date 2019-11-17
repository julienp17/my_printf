/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for l length modifier
*/

#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_l_length_modifier, zero, .init = cr_redirect_stdout)
{
    long int number = 0L;
    char const expected[] = "0";

    my_printf("%ld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, fourty_two_l, .init = cr_redirect_stdout)
{
    long int number = 42L;
    char const expected[] = "42";

    my_printf("%li", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, neg_eighty_four, .init = cr_redirect_stdout)
{
    long int number = -84L;
    char const expected[] = "-84";

    my_printf("%ld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, long_int_min, .init = cr_redirect_stdout)
{
    long int number = LONG_MIN;
    char const expected[] = "-9223372036854775808";

    my_printf("%ld", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, long_int_max, .init = cr_redirect_stdout)
{
    long int number = LONG_MAX;
    char const expected[] = "9223372036854775807";

    my_printf("%li", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uzero_unsigned, .init = cr_redirect_stdout)
{
    long unsigned int number = 0L;
    char const expected[] = "0";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uzero_octal, .init = cr_redirect_stdout)
{
    long unsigned int number = 0L;
    char const expected[] = "0";

    my_printf("%lo", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uzero_hexa_lower, .init = cr_redirect_stdout)
{
    long unsigned int number = 0L;
    char const expected[] = "0";

    my_printf("%lx", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uzero_hexa_upper, .init = cr_redirect_stdout)
{
    long unsigned int number = 0L;
    char const expected[] = "0";

    my_printf("%lX", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uforty_two_unsigned, .init = cr_redirect_stdout)
{
    long unsigned int number = 42L;
    char const expected[] = "42";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uforty_two_octal, .init = cr_redirect_stdout)
{
    long unsigned int number = 42L;
    char const expected[] = "52";

    my_printf("%lo", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uforty_two_hexa_lower, .init = cr_redirect_stdout)
{
    long unsigned int number = 42L;
    char const expected[] = "2a";

    my_printf("%lx", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, uforty_two_hexa_upper, .init = cr_redirect_stdout)
{
    long unsigned int number = 42L;
    char const expected[] = "2A";

    my_printf("%lX", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, ulong_int_max_unsigned, .init = cr_redirect_stdout)
{
    long unsigned int number = ULONG_MAX;
    char const expected[] = "18446744073709551615";

    my_printf("%lu", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, ulong_int_max_octal, .init = cr_redirect_stdout)
{
    long unsigned int number = ULONG_MAX;
    char const expected[] = "1777777777777777777777";

    my_printf("%lo", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, ulong_int_max_hexa_lower, .init = cr_redirect_stdout)
{
    long unsigned int number = ULONG_MAX;
    char const expected[] = "ffffffffffffffff";

    my_printf("%lx", number);
    cr_assert_stdout_eq_str(expected);
}

Test(my_l_length_modifier, ulong_int_max_hexa_upper, .init = cr_redirect_stdout)
{
    long unsigned int number = ULONG_MAX;
    char const expected[] = "FFFFFFFFFFFFFFFF";

    my_printf("%lX", number);
    cr_assert_stdout_eq_str(expected);
}