#include <stdio.h>

/**
 * main -entry point
 *
 * print all hexadecimal in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int hexadecimal;

for (hexadecimal = 48; hexadecimal < 57; hexadecimal++)
{
putchar(hexadecimal);
}

for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
{
putchar(hexadecimal);
}

putchar('\n');

return (0);
}

