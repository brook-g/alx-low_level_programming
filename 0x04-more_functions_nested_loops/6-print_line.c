#include "main.h"

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
		_putchar(95);
	}
	_putchar(10);
}
