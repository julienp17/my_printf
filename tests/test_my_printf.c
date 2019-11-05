/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Unit tests for my_printf
*/

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, hello_world, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, one_char_in_str, .init = redirect_all_std)
{
    my_printf("h");
    cr_assert_stdout_eq_str("h");
}

Test(my_printf, one_newline_in_str, .init = redirect_all_std)
{
    my_printf("\n");
    cr_assert_stdout_eq_str("\n");
}