#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	strcat(result, s2);

	result[len1 + len2] = '\0';

	return (result);
}
