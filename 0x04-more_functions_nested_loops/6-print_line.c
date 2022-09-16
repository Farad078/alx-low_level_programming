#include "main.h"

/**
 * print_line - Entry point
 * @n: An argument to be imputed.
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			_putchar ('_');
		}
		_putchar('\n');
	}
	else
		_putchar ('\n');
}
