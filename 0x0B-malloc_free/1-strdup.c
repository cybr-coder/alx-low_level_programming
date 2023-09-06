#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer with a copy of a string
 * to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int length, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	copy = (char *)malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}
