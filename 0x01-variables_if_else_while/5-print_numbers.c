#include <stdio.h>

/**
 * main -entry point
 *
 * printing single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
int digits;

for (digits = 0; digits < 10; digits++)
{
printf("%d", digits);
}

printf("\n");

return (0);
}

