#include <stdio.h>

/**
 * main -entry point
 *
 * printing lower case alphabets
 *
 * Return: Always 0
 */
int main(void)
{
char alphabetlowercase;

for (alphabetlowercase = 'a'; alphabetlowercase <= 'z'; alphabetlowercase++)
{
putchar(alphabetlowercase);
}
putchar('\n');

return (0);
}

