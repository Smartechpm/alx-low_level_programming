#include <stdio.h>

/**
 * main -entry point
 *
 * printing both lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int alphaBETS;

for (alphaBETS = 'a'; alphaBETS <= 'z'; alphaBETS++)
{
putchar(alphaBETS);
}
for (alphaBETS = 'A'; alphaBETS <= 'Z'; alphaBETS++)
{
putchar(alphaBETS);
}
putchar('\n');

return (0);
}

