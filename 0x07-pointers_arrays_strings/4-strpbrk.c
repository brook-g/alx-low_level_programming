#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches the first occurence of
 * a string for any of a set of bytes.
 * @s: string to search in.
 * @accept: parameter.
 * Return: matches with accept.
 */

char *_strpbrk(char *s, char *accept)
{
	/* declare variables */
	int i, j, bool;

	/* iterate through s */
	while (char s != '\0')
	{
		/* if character is found */
		if (_strchr(accept, *s))
		{
			return (accept);
		}
		s++;
	}
	return (0);
}
