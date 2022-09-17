#include "main.h"

/**
 * print_square - Entry point
 * @n: An argument to be imputed.
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_square(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');

		}
	}
	else
		_putchar ('\n');
}
