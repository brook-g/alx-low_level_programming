#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	/* declare loop variables */
	unsigned int i, j;
	
	/* iterate through string s */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* iterate and check each char for a match */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* if match is found, return s */
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
