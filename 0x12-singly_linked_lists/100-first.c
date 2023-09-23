#include <stdio.h>

/**
 * run_first - Function to be executed before main.
 *
 */

void __attribute__((constructor)) run_first()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n ");
}
