/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stddef.h>
#include <stdio.h>

int add(int nb1, int nb2)
{
    return (nb1 + nb2);
}

int sub(int nb1, int nb2)
{
    return (nb1 - nb2);
}

int (*get_operation(char my_char))(int, int)
{
    if (my_char == '+')
        return &add;
    else if (my_char == '-')
        return &sub;
}

int main(void)
{
    int (*op)(int, int) = NULL;
    char my_char = '+';
    int nb1 = 2;
    int nb2 = 3;

    op = get_operation(my_char);
    printf("%d %c %d = %d\n", nb1, my_char, nb2, op(nb1, nb2));
    return (0);
}
