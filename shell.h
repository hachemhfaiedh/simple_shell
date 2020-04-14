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
int read_line(void);
char **parse_line(char *);
extern char **environ;
char find_env(char **glovar);

#endif
