#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: root
 * @y: power
 * Return: exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
