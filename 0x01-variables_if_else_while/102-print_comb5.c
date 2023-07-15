#include <stdio.h>
/**
 * main - Prints all possible combinations
 * of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar('0' + a / 10);
				putchar('0' + a % 10);
				putchar(32);
				putchar('0' + b / 10);
				putchar('0' + b % 10);
				if (a != 98 || b != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
