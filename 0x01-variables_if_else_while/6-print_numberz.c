#include <stdio.h>

/**
 * main -entry point
 *
 * print all base 10 digits using putchar
 *
 * Return: Always 0
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit);
}
putchar('\n');

return (0);
}

