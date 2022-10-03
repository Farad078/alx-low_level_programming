#include "main.h"

/**
 * abs - Check main
 * @n: An input character
 * Description: function returns absolute value of any number
 * Return: a value
 */

int abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	else
		return (0);
}
