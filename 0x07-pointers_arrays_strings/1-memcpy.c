#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src.
 * to memory area dest.
 * @dest: pointer to destination
 * @src: pointer to source string.
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination.
 */
char _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}

