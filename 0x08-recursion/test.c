#include "main.h"

/**
 * is_prime_number - check main
 * Description: a function that detects a prime number
 * @n: input integer
 * Return: returns an integer
 */

int is_prime_number(int n)
{
	int i = 2;
	int temp = 0;

	while (i <= n / 2)
	{
		if ((n <= 3) && !(n < 0))
		{
			temp = 0;
			break;
		}
		if ((n % i) == 0)
		{
			temp++;
		}
		i++;
	}

	if (temp > 0)
		return (0);
	if (n <= 3)
		return (1);
	else
		return (1);
}
