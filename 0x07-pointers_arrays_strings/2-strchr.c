#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in a string.
 * and returns pointer to character.
 * @s: string.
 * @c: char.
 * Return: pointer to c.
 */

char *_strchr(char *s, char c)
{
	while (*s != EOF) /* Loop until end of string is reached */
	{
		if (*s == c)	/* Check if current character matches */
		{
			return (s); /* Return pointer to matching character */
		}
	s++; /* Move to next character in string */
	}
	return (0); /* Character not found, return NULL */
}
