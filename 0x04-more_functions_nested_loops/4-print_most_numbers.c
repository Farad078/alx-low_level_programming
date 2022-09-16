#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if ((a != '2') && (a != '4'))
		{
			_putchar (a);
		}
	}
	_putchar('\n');
}
