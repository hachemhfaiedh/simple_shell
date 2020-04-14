#include "shell.h"
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
