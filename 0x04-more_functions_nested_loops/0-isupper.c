#include "main.h"
/**
 * _isupper - Checks for upper case characters
 *
 * @c: Argument
 *
 * Return: (1) if true and (0) if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
