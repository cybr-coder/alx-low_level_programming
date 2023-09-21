#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_rec(n, 2));
}

/**
 * is_prime_rec - Check for primality recursively
 * @n: Number to check.
 * @divisor: Current divisor to check against
 *
 * Return: 1 if number is prime, 0 otherwise.
 */

int is_prime_rec(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0 || n <= 1)
		return (0);

	return (is_prime_rec(n, divisor + 1));
}
