#include "maiin.h"

/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
