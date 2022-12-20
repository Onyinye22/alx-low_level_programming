#include "main.h"
/**
 * puts2 - puts string twice
 *
 * @str: string to be put back
 *
 * Always Rerurn 0
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
