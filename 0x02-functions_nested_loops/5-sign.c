#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to check
 * Return: 1 if (n > 0), 0 if (n == 0) or -1 if (n < 0)
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+')
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0')
	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
