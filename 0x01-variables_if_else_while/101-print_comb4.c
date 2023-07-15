#include <stdio.h>
/**
 * main - print all possible different
 * combinations of three digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar(a % 10 + '0');
					putchar(b % 10 + '0');
					putchar(c % 10 + '0');
					if (a < 7)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
