#include "main.h"

/**
 * print_array - check main
 * Description: a function that prints n elements of an array of integers
 * @a: input integer
 * @n: input integer
 * return: Nothing
 */

void print_array(int *a, int n)
{
	int k;
	int j = n - 1;

	for (k = 0; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k < j)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
