#include "shell.h"
/**
 * *find_env - function that finds the environment
 * @glovar: parameter
 * Return: char
 */
char *find_env(char *glovar)
{
	int i, j;
	char *r;

	if (!glovar)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (glovar[j] == environ[i][j])
		{
			while (glovar[j])
			{
				if (glovar[j] != environ[i][j])
					break;

				j++;
			}
			if (glovar[j] == '\0')
			{
				r = (environ[i] + j + 1);
				return (r);
			}
		}
	}
	return (0);
}
