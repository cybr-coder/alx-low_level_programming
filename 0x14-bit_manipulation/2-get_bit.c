#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to extract the bit from.
* @index: The index of the bit to get (0-based).
*
* Return: The value of the bit at the given index, or -1 if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1 << index;
		return ((n & mask) >> index);
}

