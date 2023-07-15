#include <stdio.h>

/**
 * main - print all numbers from base16
 * in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	char alpha;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
