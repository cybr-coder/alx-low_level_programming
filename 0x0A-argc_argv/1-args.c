#include <stdio.h>

/**
 * main - Prints number of arguments passed
 * @argc: count of arguments
 * @argv: index of arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
