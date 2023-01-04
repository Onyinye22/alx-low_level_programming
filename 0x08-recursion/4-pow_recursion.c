#include "main.h"

/**
 * _pow_recursion - gives power of int
 * @a: integer to power
 * @b: power to do
 * Return: integer value
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b > 0)
	{
		return (a * _pow_recursion(a, b - 1));
	}
	return (1);
}
