#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer variable
 * Return: zero.
 */

void print_chessboard(char(*a)[8])
{
	/* declare variables */
	unsigned int i, m = 0;

	/* outer loop */
	for (i = 0; i < 64; i++)
	{
		/* inner loop */
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			putchar('\n');
		}
		putchar(a[i / 8][i - m]);
	}
	putchar('\n');
}
