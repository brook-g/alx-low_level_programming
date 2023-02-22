#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number.
 *
 * @n: The input number as an integer.
 *
 * Return: int last digit of a number.
 *
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld);
		return (-ld);
	}
	else
	{
		_putchar(ld);
		return (ld);
	}
}
