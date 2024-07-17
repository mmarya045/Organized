/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** my_putstr
*/

#include "../include/my.h"
#include <stddef.h>

int my_putstr(char const *str)
{
    int m = 0;

    if (str == NULL) {
        return 0;
    }
    while (str[m] != '\0') {
        my_putchar(str[m]);
        m = m + 1;
    }
    return m;
}
