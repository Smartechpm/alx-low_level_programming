#include "main.h"
/**
 * _strcpy - copy the string to the end of another string including \0.
 * @dest: pointer to a copied string
 * @src: pointer to string to be copied
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j]
	}
	dest[j] = '\0';
	return (dest);
}

