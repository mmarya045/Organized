/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** my_putstr
*/

#include "../include/my.h"
#include <unistd.h>
#include <stdio.h>

int get_len(char **args)
{
    int index = 0;
    int count_argc = 0;

    while (args[index] != NULL) {
        index = index + 1;
        count_argc = count_argc + 1;
    }
    return count_argc;
}

void display_word(link_list_t *new)
{
    my_putstr(new->name);
    my_putstr(" n°");
    my_put_nbr(new->num);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(new->type);
    my_putchar('"');
    my_putstr(" ");
    my_putstr("added.\n");
}

void display_word_for_del(link_list_t *next)
{
    if (next != NULL) {
        my_putstr(next->name);
        my_putstr(" n°");
        my_put_nbr(next->num);
        my_putstr(" - ");
        my_putchar('"');
        my_putstr(next->type);
        my_putchar('"');
        my_putstr(" ");
        my_putstr("deleted.\n");
    }
}

int del_next(link_list_t **lists, link_list_t *node, int num)
{
    if (node == NULL && (*lists)->num == num) {
        node = (*lists);
        display_word_for_del(node);
        (*lists) = (*lists)->next;
    } else {
        display_word_for_del(node);
    }
    return 0;
}
