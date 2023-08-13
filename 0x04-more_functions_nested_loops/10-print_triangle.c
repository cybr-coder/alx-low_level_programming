#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int h, w, p;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			_putchar(' ');

		for (p = 1; p <= h; p++)
			_putchar('#');

		_putchar('\n');
	}
}
