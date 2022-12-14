#include "main.h"

/**
 * isalpha - Lowercase or uppercase
 *
 * @c: compare character
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
