#include "shell.h"
#define DEL "\n\t\a\r\v"
/**
 * sig - checks if Ctrl C is pressed
 * @sig_num: int
 */
void sig(int sig_num)
{
	if (sig_num == SIGINT)
	{
		_print("\n#cisfun$ ");
	}
}
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
exit(0);
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
	int i = 0, j = 0;
	char **array;

	array = malloc(sizeof(char *) * 64);
	if (array == NULL)
	{
	perror("ERROR: not enough space");
	return (NULL);
	}
*array = NULL;
token = strtok(buffer, DEL);
for (i = 0; token != NULL; i++)
{
for (j = 0; j < _strlen(token); j++)
{
;
}
if (token[j - 1] == '\n')
token[j - 1] = '\0';
array[i] = token;
token = strtok(NULL, DEL);
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
while (1)
{
if (isatty(0))
_print("#cisfun$ ");
buff = read_line();
a = parse_line(buff);
_strcpy(c, a[0]);
free(buff);
buff = NULL;
_free(a);
}
return (0);
}
