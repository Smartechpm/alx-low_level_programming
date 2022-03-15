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

for (digit = 48; digit <= 57; digit++)
{
putchar(digit);
}
putchar('\n');

return (0);
}

