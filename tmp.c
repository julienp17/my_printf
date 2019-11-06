/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stdio.h>
#include "my.h"

int main(void)
{
    int nb = 42;
    void *pointer = &nb;

    my_printf("my_printf pointer : [%p]\n", pointer);
    printf("printf pointer : [%p]\n", pointer);
    return (0);
}
