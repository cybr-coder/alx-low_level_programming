#include "main.h"
/**
 * _isdigit - checks digits from 0 to 9
 *
 * @c: Argument
 *
 * Return: (1) if c is a digit, else (0)
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
