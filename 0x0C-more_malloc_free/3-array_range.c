#include "main.h"

/**
 * array_range - check main
 * Description: a function that creates an array of integers.
 * @min: input integer
 * @max: input integer;
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *temp;
	int a = 0, len = 0, start = min;

	if (min > max)
		return (NULL);

	while (start <= max)
	{
		start++;
		len++;
	}
	temp = malloc(len * sizeof(int));

	if (temp == NULL)
		return (NULL);
	start = min;
	while (a < len)
	{
		temp[a] = start;
		start++;
		a++;
	}

	return (temp);
}
