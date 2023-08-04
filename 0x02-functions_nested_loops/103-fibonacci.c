#include <stdio.h>
/**
 * main - Find and prints the sum of even-valued terms that
 * not exceed 4,000,000 followed by a new line
 *
 * Return: (0)
 */

int main(void)
{
	long int x, y = 1, z = 2, sum = 0, total = 0;

	for (x = 0; x < 49; x++)
	{
		if ((z % 2 == 0) && (y <= 4000000))
		{
			total += y;
		}
		sum = y + z;
		y = z;
		z = sum;
	}
	return (0);
}
