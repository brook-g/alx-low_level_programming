#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char p = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	while (p <= 'Z')
	{
		putchar(p);
		p++;
	}

	putchar('\n');

	return (0);
}
