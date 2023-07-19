#include "main.h"
/**
 * _islower - Check if a character is a lowercase
 *
 * @c: argument
 *
 * Return: 1, if c is lower and 0 if c is upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
