#include "variadic_functions.h"

/**
 * sum_them_all - check variadic_functions
 * Description: a function that returns the sum of all its parameters.
 * @n: input integer
 * Return: return integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}

	va_end(args);
	return (sum);
}


