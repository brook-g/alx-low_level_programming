#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to 98
 *
 * @n - int variable
 *
 * return: 0
 */

void reset_to_98(int *n)
{
	int n;
	int *np;
	np = &n;

	putchar(n);
	putchar('\n');
	putchar(*np);

	*np = 98;

	putchar('n=');
	putchar(*ip);

	return (0);
}
