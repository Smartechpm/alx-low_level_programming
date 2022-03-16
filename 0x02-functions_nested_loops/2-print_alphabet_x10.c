#include "main.h"

/**
 * print_alphabet_x10 -function.
 * Description: print alphabets 10 times.
 * Return: void.
 */

void print_alphabet_x10(void)
{
char alphabet;
int i;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
for (i = 0; i < 10; i++)
{
_putchar(alphabet);
}
_putchar('\n');
}

