#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: count of arguments
 * @argv: index of arguments
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int i, j, sum, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
		printf("%d\n", sum);
		return (0);
}
