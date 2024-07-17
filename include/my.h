/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my printf
*/

#ifndef MY_H_
    #define MY_H_
    #include "../shells/shell.h"
    #include <stdarg.h>

typedef int (*factors)(va_list);
typedef struct type_t {
    char c; // 'a',...
    factors function; // toutes les fonctions utiles
} type_t;

int my_putchar(char c);
int my_putchar_error(char c);
int my_putstr(char const *str);
int my_putstr_error(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
char *my_strdup(char const *src);
char *my_free(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int my_str_isnum(char const *str);
int my_getnbr(char const *str);
char **my_str_to_word_array(char const *str, char delim);
int execute(float right, int cmp);
#endif
