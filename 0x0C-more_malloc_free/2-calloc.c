#include "main.h"

/**
 * _calloc - check main
 * Description: a function allocates memory
 * for an array of nmemb elements of size bytes
 * @nmemb: input integer
 * @size: input unsigned integer
 * Return: returns a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *temp = malloc(nmemb * size);

	if (temp == NULL)
		return (NULL);
	return (temp);
}
