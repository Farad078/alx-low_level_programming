#include "main.h"

/**
 * swap_int - check main
 * Description: a function that swaps values of integers
 * @a: pointer argument
 * @b: pointer argument
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
