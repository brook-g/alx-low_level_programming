#include "main.h"
#include <stdio.h>

/**
 * *_memset(char *s, char b, unsigned int n) - fills memory
 * with a constant byte.
 * @s: pointer to the block of memory to fill.
 * @b: value to be set.
 * @n: bytes of memory to be set to the value.
 * Return: *s (pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < 10; i++)
		s[i] = b;
}
