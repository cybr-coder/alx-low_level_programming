#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if ((n / 10) < (n % 10))
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (n < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
