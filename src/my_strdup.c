/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int l = 0;

    while (str[l] != '\0') {
        l = l + 1;
    }
    return l;
}

char *my_strdup(char const *src)
{
    char *str;
    int i = my_strlen(src);
    int c = 0;

    str = malloc(sizeof(char) * i);
    while (src[c] != '\0') {
        str[c] = src[c];
        c = c + 1;
    }
    str[c] = '\0';
    return str;
}
