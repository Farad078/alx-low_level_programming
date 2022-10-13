#include "function_pointers.h"


/**
 * array_iterator - check function
 * Description: a function that executes a function
 * @array: a pointer to array
 * @size: input size
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *temp_array = array;
	void (*func)(int);
	unsigned int i = 0;

	func = action;

	while (i < size)
	{
		(*func)(temp_array[i]);
		i++;
	}
}
