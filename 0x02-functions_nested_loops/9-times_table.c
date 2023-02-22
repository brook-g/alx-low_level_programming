#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, k, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (k = 1; k <= 9; k++)
		{
			op = i * k;
			_putchar(44);
			_putchar(32);
			if (p <= 9)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
