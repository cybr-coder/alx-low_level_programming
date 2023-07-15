#include <stdio.h>

/**
 * main - print numbers from zero to nine
 * without the printf functon.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
