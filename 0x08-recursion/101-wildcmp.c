#include "main.h"

/**
* wildcmp - Compares two strings with wildcard *.
* @s1: Fist string.
* @s2: Second string.
*
* Return: 1 if the string can be considered identical, 0 otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}

	if (*s2 == '*')
		return ((wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
