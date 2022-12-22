#include "main.h"

/**
 * print_square - print square
 * 
 * @size: integer to set square size
 *
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
