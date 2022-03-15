#include <stdio.h>

/**
 * main -entry point
 *
 * print comb
 *
 * Return: Always 0
 */
int main(void)
{
int comb;

for (comb = 48; comb <= 57; comb++)
{
putchar(comb);
if (comb == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}

