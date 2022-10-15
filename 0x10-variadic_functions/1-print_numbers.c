#include "variadic_functions.h"

/**
 * print_numbers - check variadic_functions
 * Description: a function that returns the sum of all its parameters.
 * @separator: pointer to a character
 * @n: input unsigned integer
 * Return: return integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x, j, k = 0;
	va_list args;

	j = n - 1;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);
		if (separator == NULL)
		{
			continue;
		}
		if (k < j)
		{
			printf("%s", separator);
			k++;
		}

	}
	printf("\n");
	va_end(args);
}


