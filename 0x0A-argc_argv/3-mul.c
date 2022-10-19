#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplication followed by new line
 * @argc: number of arguments.
 * @argv: array of size argc
 *
 * Return: 0 on success
 * 1 on error
 */
int main(int argc, char *argv[])
{
	int count, product;

	product = 1;
	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			product *= atoi(argv[count]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Erro\n");
		return (1);
	}

	return (0);
}

