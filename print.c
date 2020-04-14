#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
