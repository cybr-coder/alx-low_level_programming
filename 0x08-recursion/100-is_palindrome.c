#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Function to check for palindrome recursively.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the substring is a palindrome, otherwise 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - Helper function to calculate the length of a string recursively.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
