#include "function_pointers.h"

/**
 * int_index - Seach for an integer
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: index of where integer was found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
