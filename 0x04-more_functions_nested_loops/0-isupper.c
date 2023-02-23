#include "_isupper.h"
#include <main.h>

/**
 *_isupper.h - checks for uppercase characters in a string.
 *
 *@c - uppercase
 *
 *return - 1 if uppercase is found. 0 if not found.
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
