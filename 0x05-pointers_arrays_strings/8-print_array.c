#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer to an array
 * @n: number of array elements
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

