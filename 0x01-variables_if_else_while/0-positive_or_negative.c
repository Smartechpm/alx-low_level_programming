#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 *
 *Return: always 0 (Success/correct)
 */

int main(void)
{
int n;
srand(time(0));
n = read() - RAND_MAX / 2;
if (n==0)
{
printf("%i is zero\n",n);
}
else if (n<0)
{
printf("%i is negative\n",n);
}

else
{
printf("%i is positive\n",n);
}
return (0);
}
