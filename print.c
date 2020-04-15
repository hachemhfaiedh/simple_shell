#include "shell.h"

/**
 * _print - prints a whole string
 * @str: the string
 *
 * Return: void
 */
int _print(char *str)
{
int i = 0;
while (str[i])
{
i++;
}
write(1, str, i);
return (1);
}
