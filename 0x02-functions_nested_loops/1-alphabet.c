#include "main.h"

/**
 * print_alphabet - Print all alphabets using _putchar
 *
 * Return: void
 */


void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
