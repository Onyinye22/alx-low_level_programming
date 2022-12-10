#include <stdio.h>
/**
 * main - success combination
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (z > y && y > x)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x != 7 || y != 8 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
