#include "main.h"

/*
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
	{
		res = i * j;
		if (j == 0)
			putchar('0');
		else if (res <= 9)
			putchar(' ');
		else
			putchar((res / 10) + '0');
		putchar((res % 10) + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	}
}
