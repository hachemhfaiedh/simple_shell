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
<<<<<<< HEAD


=======
>>>>>>> 4971220526ae6667caa73f0a545636b6dceb92fa
int _putchar(char c);
int _print(char *str);
int main(void);
int read_line(void);
<<<<<<< HEAD
char** parse_line(char *);

#endif
=======
char **parse_line(char *);
extern char **environ;
int print_env(char **environ);
#endif
>>>>>>> 4971220526ae6667caa73f0a545636b6dceb92fa
