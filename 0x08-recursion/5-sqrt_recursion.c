#include "main.h"

/* Declaring a prototype */
int counter(int n, int k);

/**
 * _sqrt_recursion - check main
 * Description: a function that returns the natural square root.
 * @n: input integer
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	int k = 1;
	int i = counter(n, k);
	int j;
	int temp = n;

	j = i * i;
	if (j != temp)
		return (-1);
	else
		return (i);
}

/**
 * counter - function defined in here
 * Description: a function that recursively counts
 * @n: input integer
 * @k: input integer
 * Return: returns an integer
 */

int counter(int n, int k)
{
	if (n < 0)
	{
		return (-1);
	}
	return (1 + counter((n - k), k + 2));
}
