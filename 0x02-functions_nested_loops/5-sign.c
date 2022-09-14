#include "main.h"

/**
 * print_sign - Check main
 * @n: An input character
 * Description: function returns 1 if n is greater than zero
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

