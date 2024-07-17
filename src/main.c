/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int add(void *data, char **args)
{
    link_list_t **lists = (link_list_t **)data;
    link_list_t *new = NULL;

    if (get_len(args) < 2) {
        return 84;
    }
    new = malloc(sizeof(link_list_t) * 1);
    new->name = my_strdup(args[0]);
    new->type = my_strdup(args[1]);
    if ((*lists) == NULL) {
        new->num = 0;
    } else {
        new->num = (*lists)->num + 1;
    }
    new->next = (*lists);
    (*lists) = new;
    display_word(new);
    return 0;
}

int sort(void *data, char **args)
{
    return 84;
}

int disp(void *data, char **args)
{
    link_list_t **lists = (link_list_t **)data;
    link_list_t *tmp = (*lists);

    while (tmp != NULL) {
        my_putstr(tmp->name);
        my_putstr(" n°");
        my_put_nbr(tmp->num);
        my_putstr(" - ");
        my_putchar('"');
        my_putstr(tmp->type);
        my_putchar('"');
        my_putchar('\n');
        tmp = tmp->next;
    }
    return 0;
}

int del(void *data, char **args)
{
    link_list_t **lists = (link_list_t **)data;
    link_list_t *node = NULL;
    link_list_t *tmp = (*lists);
    int num = 0;

    if (get_len(args) < 1)
        return 84;
    num = my_getnbr(args[0]);
    while (tmp != NULL) {
        if (tmp->next != NULL &&
            tmp->next->num == num) {
            node = tmp->next;
            tmp->next = node->next;
        }
        tmp = tmp->next;
    }
    del_next(&(*lists), node, num);
    return 0;
}

int main(void)
{
    link_list_t *lists = NULL;

    workshop_shell(&lists);
    return 0;
}
