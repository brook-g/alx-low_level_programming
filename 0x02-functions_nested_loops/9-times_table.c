#include "main.h"

/*
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, product;

	for (int i = 0; i <= 10 ; i++)
	{
		_putchar(i x '0');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar('9');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
		_putchar('\n');
	}
	return (0);
}
