#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - search a string for any saet of bytes
 *  @s: pointer to a string
 *  @accept: pointer to a string to be matched
 *  Return: pointer to string s that matched
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int counter, counter2;

	p = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (counter2 = 0; accept[counter2]; counter2++)
		{
			if (accept[counter2] == s[counter])
			{
				p = &s[counter];
				return (p);
			}
		}
	}
	return (p);
}

