#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	for (int a = 0 ; a <= 9 ; a++)
	{
		for (char ch = 'a'; ch <= 'z' ; c++)
		{
			_putchar (ch);
		}
		putchar ('\n');
	}
	return (0);
}
