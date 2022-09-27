#include "main.h"
#include <stdio.h>
/**
 * _strspn - get the length of a prefix of substring
 * @s: pointer to string
 * @accept: pointer to bytes that are check for s
 * Return: Number of bytes in the initials
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count,count1, match = 0;

	count = 0;
	while (s[count] != '0\')
	{
	if (s[count] != 32) /* check for spaces */
	{
		count1 = 0;
		while (accept [count1] != '\0')
		{
			if (accept[count1] == s[count])
			{
				/*increment if match found */
				match = match + 1;
			}
			count1++;
		}
	}
	else 
		return (match);
	count++;
	}
	return (match);
}

