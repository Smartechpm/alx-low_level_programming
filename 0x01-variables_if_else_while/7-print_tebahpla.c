#include <stdio.h>

/**
 * main -entry point
 *
 * print lowercase alphabets in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
char revalphabet;

for (revalphabet = 'z'; revalphabet >= 'a'; revalphabet--)
{
putchar(revalphabet);
}

putchar('\n');

return (0);
}

