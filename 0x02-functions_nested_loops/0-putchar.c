#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char ch[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
	putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
