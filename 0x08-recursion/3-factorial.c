#include "main.h"

/**
 * factorial - check main
 * Description: a function that returns the factorial of a given number.
 * @n: input pointer to an integer.
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
