#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - creates array
 * @size: size of array to create
 * @char: char to initialize
 * Return: 0
 */

char *create_array(unsigned int size, char c);
{
	char *b;
	unsigned int x;
	
	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	b = (char *) malloc(size * size of(c));

	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		x = 0;
		while (position < size) /*While for array*/
		{
			*(b + x) = c;
			b++;
		}

		return (b);
	}
}
