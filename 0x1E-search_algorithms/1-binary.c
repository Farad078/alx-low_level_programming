#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: A pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: an integer value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(",");
			}
		}
		mid = (low + high) / 2;
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] > value)
		{
			high = mid - 1;
		}

		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	return (-1);
}
