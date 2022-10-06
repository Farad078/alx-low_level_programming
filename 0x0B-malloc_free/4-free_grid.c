#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees 2 dimensional grid
 * previously created by alloc_grid function
 * @grid: a pointer to array
 * @height: input integer
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
