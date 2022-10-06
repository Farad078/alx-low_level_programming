#include "main.h"

/**
 * malloc_checked - check main
 * Description: a function that allocates memory using malloc
 * @b: input unsigned integer
 * Return: returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
