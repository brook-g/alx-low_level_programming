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
	unsigned ld = n % 100;

	_putchar(ld);

	return (ld);
}
