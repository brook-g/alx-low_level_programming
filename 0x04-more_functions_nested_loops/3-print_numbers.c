#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers from 0 to 9
 * followed by a new line to the standard output
 *
 * Return: always 0.
 *
 */

void print_numbers(void)
{
	int a;

	for (a >= 48; a <= 58 ; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
