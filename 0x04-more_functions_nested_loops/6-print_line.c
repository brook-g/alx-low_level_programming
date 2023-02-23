#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * return: always 0.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(95);
	}
	putchar(10);
}
