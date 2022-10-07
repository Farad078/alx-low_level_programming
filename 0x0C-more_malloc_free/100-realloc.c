#include "main.h"

/**
 * _realloc - check main
 * Description: a function that reallocates a memory block
 * using malloc and free
 * @ptr: a pointer to void
 * @old_size: input an unsigned integer
 * @new_size: input an unsigned integer
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		temp = malloc(new_size * sizeof(char));
		return (temp);
	}
	else if ((old_size < new_size) && (ptr != NULL))
	{
		free(ptr);
		temp = malloc(new_size * sizeof(char));
		return (temp);
	}
	else if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	else
		return (NULL);
}
