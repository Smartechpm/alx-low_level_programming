#include "main.h"
/**
 * print_square - printing the square of #
 *
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

