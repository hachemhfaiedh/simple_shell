#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>

int _putchar(char c);
int _print(char *str);
int main(void);
char *read_line(void);
char **parse_line(char *);
extern char **environ;
char *find_env(char *glovar);
void sig(int sig_num);
char *_strdup(char *str);
char *concat_all(char *name, char *sep, char *value);
int _strlen(char *s);
list_path *add_node_end(list_path **head, char *str);
list_path *linkpath(char *path);
char *_which(char *filename, list_path *head);
void free_list(list_path *head);
#endif
