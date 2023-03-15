#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @c: char in memory
 * @size: size of memory
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (ptr == NULL)
		return (NULL);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	return (ptr);
	}
	else
	{
		return (0);
	}
}
