#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to standard output.
 * @str: input string.
 * Return - nothing to return.
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		putchar(str[count]);
		putchar('\n');
		count++
	}
}
