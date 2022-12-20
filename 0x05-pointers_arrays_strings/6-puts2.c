#include <stdio.h>
#include "main.h"

/**
* puts2 - Print every other character of a strig
* @str: pointer value
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}
