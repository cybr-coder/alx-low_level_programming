#include <stdio.h>

/**
 * main - print the alphabets in lower
 * and upper cases
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
