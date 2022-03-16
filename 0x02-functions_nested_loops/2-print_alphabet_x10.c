#include "main.h"

/**
 * print_alphabet_x10 -function.
 * Description: print alphabets 10 times.
 * Return: void.
 */

void print_alphabet_x10(void)
{
char alphabet;
int i = 0;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
while (i < 10)
{
_putchar(alphabet);
_putchar('\n');
i++;
}
}

