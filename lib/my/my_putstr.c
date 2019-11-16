/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Displays the characters of a string.
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    for (unsigned int i = 0 ; str[i] != '\0' ; i = i + 1)
        my_putchar(str[i]);
}
