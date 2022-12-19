#include "main.h"

/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}
