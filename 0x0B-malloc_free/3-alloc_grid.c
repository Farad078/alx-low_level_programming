#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - check main
 * Description: a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: input integer
 * @height: input integer
 * Return: returns NULL if width or height is zero
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ptr;

	if ((width == 0) || (height == 0))
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	while (i < height)
	{
		ptr[j] = (int *)malloc(width * sizeof(int));
		j++;
		i++;

	}
		i = 0, j = 0;

	while (i < height)
	{
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
