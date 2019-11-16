/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Copies a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    unsigned int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}