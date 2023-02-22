#include "main.h"

/**
 * _abs - determines the absolute value
 * of an integer.
 *
 * @n: The input number as an integer.
 *
 * Return: unsigned int n
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
