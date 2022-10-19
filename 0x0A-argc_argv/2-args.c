
#include <stdio.h>
/**
 * main - prints the No. of arguments passed to it
 * @argc: number of arguments.
 * @argv: array of size argc
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

