#include "shell.h"
/**
 * _execute - executes the command
 * @s: the commands
 * @args: its arguments
 * Return: void
 */

void _execute(char *s, char *args[])
{
pid_t pid;
int status;
pid = fork();
if (pid == 0)
{
if (execve(s, args, environ) == -1)
perror("ERROR: execution issue \n");
}
else
{
wait(&status);
}
}


