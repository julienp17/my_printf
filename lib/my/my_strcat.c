/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** Concatenantes two strings
*/

char *my_strcat(char *dest, char const *src)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
        i = i + 1;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    dest[i] = '\0';
    return (dest);
}
