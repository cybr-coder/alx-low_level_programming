#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 *
 * @s: Argument, the string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
