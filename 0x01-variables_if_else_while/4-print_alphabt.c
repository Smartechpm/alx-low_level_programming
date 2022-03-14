#include <stdio.h>

/**
 * main -entry point
 *
 * print all alphabet in lower case except q and e
 *
 * Return: Always 0 
 */
int main(void)
{
char alphabt;

for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt == 'e')
continue;

else if (alphabt == 'q')
continue;

putchar(alphabt);
}
putchar('\n');

return (0);
}

