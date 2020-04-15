#include "shell.h"
#define DEL "\n\t\a\r"

/**
 *read_line - a funtioch that reads the input line after prompt
 *
 *Return: buffer
 */
char *read_line(void)
{
char *buffer = NULL;
size_t buffsize = 1024;
ssize_t  lin;
lin = getline(&buffer, &buffsize, stdin);
if (lin == -1)
{
free(buffer);
buffer = NULL;
if (isatty(STDERR_FILENO))
_print("\n");
}
return (buffer);
}
/**
 *parse_line - a function to separate line's tokens
 *@buffer: the input
 *
 *Return:array
 */
char **parse_line(char *buffer)
{
	char *token;
	int i = 0;
	char **array;

	array = malloc(sizeof(char *) * 64);
	if (array == NULL)
		return (NULL);
	*array = NULL;
	token = strtok(buffer, DEL);
	while (token)
	{
		array[i] = token;
		i++;
		token = strtok(NULL, DEL);
	}
	if (!token && !(*array))
	{
		free(array);
		free(token);
		return (NULL);
	}
	array[i] = NULL;
	return (array);
}




/**
 * main - main function for the shell
 *
 * Return: 0 on success
 */
int main(void)
{
char **a;
char *buff = NULL;
while (1 && a != EOF)
{
if (isatty(0))
_print("#cisfun$ ");
buff = read_line();
a = parse_line(buff);
free(buff);
buff = NULL;
free(a);
}
return (0);
}
