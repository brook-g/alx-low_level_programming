#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	/* declare pointers to string and substring */
	char *bhaystack;
	char *pneedle;

	/* outer loop iterates through entire string till it reaches EOF */
	while (*haystack != '\0')
	{
		/* declare pointers to string and substring */
		bhaystack = haystack;
		pneedle = needle;

		/* logic */
		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
