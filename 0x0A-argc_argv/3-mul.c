#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: index of arguments
 * Return: product of multiplication
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);
	return (0);
}
