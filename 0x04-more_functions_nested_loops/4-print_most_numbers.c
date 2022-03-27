#include "main.h"
/**
 * print_most_numbers - print numbers 0-9 leaving out 2 and 4
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) && (i == 4))
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}

