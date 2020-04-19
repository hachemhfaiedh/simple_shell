#include "shell.h"
/**
 * _free - frees a double pointer
 * @arg: array of pointers
 * Return: void
 */

void _free(char **arg)
{
int i;
for (i = 0; arg[i] != NULL; i++)
free(arg[i]);
free(arg);
}
