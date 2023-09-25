#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: the number of arguments
 * @av: an array of argument strings
 *
 * Return: pointer to the concatenated string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, len = 0, total_len = 0;
	char newline = '\n';

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1;
		len = 0;
	}

	concatenated = (char *)malloc(total_len + 1);

	if (concatenated == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concatenated[total_len++] = av[i][j];
		concatenated[total_len++] = newline;
	}
	concatenated[total_len] = '\0';

	return (concatenated);
}
