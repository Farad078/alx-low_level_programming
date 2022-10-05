#include <stdlib.h>
#include "main.h"

/**
 * create_array - a pointer to a function, check main
 * Description: a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input integer
 * @c: input string
 * Return: returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t = calloc(size, sizeof(c));

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	if (size == 0)
		return (NULL);
	else
		return (t);
}
