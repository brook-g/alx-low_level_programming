#include "main"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string;
 */

int _strlen(char *s)
{
	int count = 0;

	for (int i = 0; i < s; i++)
	{
		count++;
	}
	return (count);
}
