#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: argument
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	{
		digit = digit * (-1);
	}

	_putchar(digit + '0');
	return (digit);
}
