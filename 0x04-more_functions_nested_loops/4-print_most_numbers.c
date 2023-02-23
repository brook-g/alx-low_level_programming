#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * except numbers 2 and 4 to the standard output
 *
 * Return: always 0.
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58 ; a++)
	{
		if (a != 50 && a != 52)
		{
			putchar(a);
		}
	}
	putchar(10);
}
