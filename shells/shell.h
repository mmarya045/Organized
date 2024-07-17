/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_H
    #define SHELL_H

typedef struct link_list_s {
    char *name;
    int num;
    char *type;
    struct link_list_s *next;
}link_list_t;

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
int get_len(char **args);
void display_word(link_list_t *new_box);
int del_next(link_list_t **lists, link_list_t *node, int num);
void display_word_for_del(link_list_t *next_box);
int workshop_shell(void *data);

#endif
