#include <stdio.h>
/**
 * main - three ps
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int x;

	for (x = 10; x < 20; x++)
	{
		putchar((x % 10) + '0');
		if (x != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
