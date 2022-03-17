#include "main.h"

/**
 * _isalpha -check for alphabetic letter for both upper or lower case
 *
 * @c: input.
 * Return: 1 if c is alphabetic
 * 0 if c is anything else.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}

