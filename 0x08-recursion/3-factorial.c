#include "main.h"

/**
 * factorial - Prints the factorial of a given number
 *
 * @n: Argument
 *
 * Return: -1 if n is lower than 0, 1 if n is 0, and
 * factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
