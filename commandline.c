#include "shell.h"
#define DEL "\n\t\a\r"

/**
 *read_line - a funtioch that reads the input line after prompt
 *
 *Return: lin
 */
int read_line(void)
{
	char *buffer;
	size_t buffsize = 1024;
	int lin;

	buffer = malloc(buffsize);
	if (!buffer)
		exit(EXIT_FAILURE);
	lin = getline(&buffer, &buffsize, stdin);
	if (lin == -1)
	exit(EXIT_FAILURE);
return (lin);
}
/**
 *parse_line - a function to separate line's tokens
 *@buffer: the input
 *Return:array
 */
char **parse_line(char *buffer)
{
	char *token;
	int i = 0;
	char **array;

	array = malloc(64);
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
