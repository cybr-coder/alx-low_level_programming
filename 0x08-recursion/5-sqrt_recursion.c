#include "main.h"

/**
 * calc_sqrt - Function to calculate square root
 * @n: Number to find square root of
 * @current_guess: The current guess for the square root
 *
 * Return: The natural square root of n, -1 if it doesn't have one.
 */

int calc_sqrt(int n, int current_guess)
{
	if (current_guess * current_guess == n)
		return (current_guess);
	else if (current_guess * current_guess > n)
		return (-1);
	else
		return (calc_sqrt(n, current_guess + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find square root of
 *
 * Return: The natural square root of n, or -1 if it doesn't have.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc_sqrt(n, 0));
}
