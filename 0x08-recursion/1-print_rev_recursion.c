#include "main.h"
/**
 * _print_rev_recursion - Prints a string a reverse
 *
 * @s: The string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
