#include "main.h"

/**
 * print_rev - prints a function in reverse followed by a new line
 *
 * @s: string
 */

void print_rev(char *s)
{
	char *last = s;

	while (*last != '\0')
		last++;

	while (last != s)
	{
		last--;
		_putchar(*last);
	}

	_putchar('\n');
}
