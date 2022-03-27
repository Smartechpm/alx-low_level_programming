#include "main.h"
/**
 * more_numbers - printing numbers from 0 to 14 ten times
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
		j++;
	}
}

