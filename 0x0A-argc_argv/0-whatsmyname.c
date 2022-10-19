#include <stdio.h>
/**
 * main - prints the name of this program.
 * @argc: counts number of arguments passed in the cmd line
 * @argv: store arguments passed in the command line
 *
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

