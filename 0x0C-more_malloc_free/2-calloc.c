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
	char *temp;
	unsigned int a = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	temp = malloc(nmemb * size);

	if (temp == NULL)
		return (NULL);

	while (a < nmemb * size)
	{
		temp[a] = 0;
		a++;
	}
	return (temp);
}
