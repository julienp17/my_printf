/*
** EPITECH PROJECT, 2019
** C Pool Day 06
** File description:
** Checks if two strings are identical
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i = i + 1;
    return (s1[i] - s2[i]);
}
