#include "main.h"
/**
 * _strlen - find and output the length of the string
 * @s: pointer to a string
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

