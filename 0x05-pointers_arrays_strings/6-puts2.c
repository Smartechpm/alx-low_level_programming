#include "main.h"
/**
 * puts2 - prints very other character in string.
 * @str: pointer to a string.
 *
 * Return: void.
 */
void puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

