#include "main.h"
/**
 * _strstr - locates substring
 * finds first occurence of substring needle in
 * haystack
 * @haystack: pointer to a string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of located string
 * or NULL if substring isn't located
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr && *haystack && haystack == *needlestr)
		{
			haystack++;
			needlestr++;
		}
		if (!*needlestr)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (0);
}

