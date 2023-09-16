#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments
 *
 * Return: sum of all arguments or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, num;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		 num = va_arg(args, int);

		sum += num;
	}

	va_end(args);
	return (sum);
}
