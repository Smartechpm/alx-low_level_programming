#include "main.h"
/**
 * _strncpy - fxn that copies a string.
 * at most n bytes of src are copied.
 * if the length of src is < n, additional null bytes are  written to ensure that a total of n bytes are written.
 * @dest: pointer to a destination string
 * @src: pointer to source string.
 * @n: number of bytes to be copied
 *
 * Return: pointer to a destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCountn = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';
	return (dest);
}

