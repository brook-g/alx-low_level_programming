#include "main.h"

/**
 * print_sign - Determines if the input number
 * is equal to, greater than, or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 0 when number is zero. 1 when number
 * is greater than zero. -1 when number is less than zero.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
