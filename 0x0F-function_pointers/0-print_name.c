#include "function_pointers.c"

/**
 * print_name - Prints a name
 *
 * @name: The pointer to name
 *
 * @f: points to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
