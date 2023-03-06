#include "main.h"
#include <stdio.h>

/**
 * _memcpy(char *dest, char *src, unsigned int n): copies data
 * from source src to destination dest.
 * @src: source data.
 * @dest: destination memory area.
 * @n: bytes.
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
