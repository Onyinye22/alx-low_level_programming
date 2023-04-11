#include "main.h"

/**
 * _strcpy - main function to copy
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
