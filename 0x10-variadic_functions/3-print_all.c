#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to function
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int flag;
	va_list args;
	char *str;

	while (format)
	{
		va_start(args, format);
		while (format[i])
		{
			flag = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					flag = 0;
					break;
			}
			if (format[i + 1] && flag)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
