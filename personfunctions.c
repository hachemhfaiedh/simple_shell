#include "shell.h"

/**
  * _strlen - get length of a string
  * @str: pointer to a string
  * Return: len of string execluding null byte \0
  */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	;

	return (len);
}

**
 * _stroc - count occurens of char in a string
 * @ch: character
 * @src: string
 * Return: count of occurences
 */

int _stroc(char ch, char *src)
{
	int count = 0;
	int idx = 0;

	for ( ; src[idx] != '\0'; idx++)
	{
		if (src[idx] == ch)
			count++;
	}

	return (count);

}
