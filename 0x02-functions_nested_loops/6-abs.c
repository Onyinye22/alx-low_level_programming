#include "main.h"

/**
 * _abs - Absolute value of an integer
 * @n: The int to be operated upon
 *
 * Return: an unsigned int value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
