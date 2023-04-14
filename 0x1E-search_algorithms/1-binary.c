#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Binary_search - a function that searches for a value
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

	if(array == NULL)
	{
		return -1;
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (int i = low; i <= high; low++)
		{
			printf("%d", array[low]);
		}
		for (int i = low; i < high; low++)
                {
                        printf(", ");
                }
		if (array[high] == value)
		{
			return (high);
		}
		else if (array[high] > value)
		{
			mid = (low + high)/2;
			high = mid;
		}
		else if ((array[high] < value) && high < size)
		{
			high = high + 1;
			if (high > size)
			{
				return (-1);
			}
		}
	}
	
}
