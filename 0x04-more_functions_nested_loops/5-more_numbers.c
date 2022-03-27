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
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

