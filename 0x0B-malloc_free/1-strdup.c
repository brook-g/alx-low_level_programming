#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: if no error, duplicated string str2
 * if error, return NULL
 */

char *_strdup(char *str)
{
	unsigned int size = strlen(str) + 1;

	if (str == NULL)
		return NULL;

	char *str2 = (char *) malloc(size * sizeof(char));

	if (str2 == NULL)
		return NULL;

	strcpy(str2, str);

	return str2;
}
