#include "function_pointers.h"

/**
 * int_index - check function_pointers
 * Description: a function that searches for an integer
 * @array: a pointer to array
 * @size: input to integer
 * @cmp: pointer to function
 * Return: returns Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *temp = array;
	int i = 0, count = 0;
	int (*func)(int);

	func = cmp;
	if ((array == NULL) || (cmp == NULL))
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if ((*func)(temp[i]) == 1)
		{
			count += i;
			break;
		}
		i++;
	}
	return (count);
}
