#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	/* declare variables */
	unsigned int i, j, bool;

	/* outer loop iterates through each char in string */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* bool variable to check if substring exists */
		bool = 1;
		/* for loop to iterate through string */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* if substring does not exist, bool is 0 (false) */
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		/* if substring exists, bool remains 1 (true) */
		}
		if (bool == 1)
			break;
	}
	return (i);
}
