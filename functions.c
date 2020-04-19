#include "shell.h"
/**
* _strlen - a function that returns the length of a string
* @s: parameter desigining a character
* Return: i
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
