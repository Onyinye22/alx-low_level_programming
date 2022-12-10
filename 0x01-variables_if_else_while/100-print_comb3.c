#include <stdio.h>
/**
 * main - combination
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int x;
	int y;

	for (x = 10; x <= 19; x++)
	{
		for (y = 10; y <= 19; y++)
		{
			if ((y % 10) > (x % 10))
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				if (x != 18 || y != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
