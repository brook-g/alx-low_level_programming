#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse.
 * @s: string input
 * return: zero.
 */

void print_rev(char *s)
{
	int count = 0, i, j;
	int *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j> 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j-1));
			*(str + (j-1)) = temp;
		}
	}
}
