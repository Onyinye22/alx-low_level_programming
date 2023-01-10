#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamicallyand initialilze it with
 * a specific char.
 * @size: size of the array
 * @c: char to initialize the array with.
 *
 * Return: NULL if it fails or 
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */
	buffer = (char *) malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
