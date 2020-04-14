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
 *
 *Return:array
 */
char **parse_line(char *buffer)
{
char *s;
int i = 0, j = 0, lenth = 0;
char **array;
s = strtok(buffer, DEL);
while (buffer[i])
{
if (buffer[i] != ' ')
{
lenth++;
while (buffer[i] != ' ' && buffer[i] != '\0')
i++;
}
else
i++;
}
array = malloc(sizeof(char *) * lenth + 1);
if (!array)
exit(EXIT_FAILURE);
while (s)
{
array[j] = s;
j++;
s = strtok(NULL, "\n");
}
array[j] = NULL;
return (array);
}

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
 * main - main function for the shell
 *
 * Return: 0 on success
 */
int main(void)
{
char **a;
char *buffer;
char *envp[] = {(char *) "PATH=/bin", 0};
signal(SIGINT, sig);
while (1)
{
if (isatty(0))
_print("#cisfun$ ");
read_line();
parse_line(buffer);
if (fork() != 0)
wait(NULL);
exceve();
free(buffer);
return (0);
}
