#include "main.h"

/**
 * _pow_recursion - print the value of x raised to the power y
 *
 * @x: number
 * @y: exponent
 *
 * Return: -1 if y is lower than 0,
 * 1 if x is 1 or y is 0,
 * Exponent of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
