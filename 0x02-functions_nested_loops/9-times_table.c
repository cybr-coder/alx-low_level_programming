#include "main.h"
/**
 * times_table - print the 9 thimes table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			if (y == 0)
			{
				_putchar('0' + z);
			}
			else if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
			}
			else if (z > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
			}
		}
		_putchar('\n');
	}
}
