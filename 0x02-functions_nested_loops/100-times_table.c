#include "main.h"
/**
 * print_times_table - print the multiplication table
 * of numbers from 0 to n
 *
 * @n: Argument
 */

void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n < 16)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				p = r * c;
				if (c == 0)
				{
					_putchar('0' + p);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + (p / 10) % 10);
						_putchar('0' + (p % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
