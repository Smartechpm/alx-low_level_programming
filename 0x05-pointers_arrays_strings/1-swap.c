#include "main.h"
/**
 * swap_int - swap the value of two ints.
 * @a: point to one int
 * @b: point to second int.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

