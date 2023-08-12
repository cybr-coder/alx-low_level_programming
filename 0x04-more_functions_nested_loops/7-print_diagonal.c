#include "main.h"
/**
 * print_diagonal - draws a diaginal line on the terminal
 *
 * @n: Number of times the charater '/' should be printed
 *
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
