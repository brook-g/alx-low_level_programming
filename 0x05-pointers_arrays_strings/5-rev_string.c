#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse.
 * @s: string input
 * return: zero.
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
