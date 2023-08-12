#include "main.h"
/**
 * print_line - draw a straight line
 *
 * @n: Number times the line is to be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
