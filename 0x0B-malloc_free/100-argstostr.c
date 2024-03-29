#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program.
 * @ac: arguments count.
 * @av: pointer to array of size ac
 * Return: Null if ac == 0 or av == null, pointer to new string.
 * NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\0';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}

