#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * return: 0
 */

void print_alphabet_x10(void)
{
	int a = 1;
	char c;

	while (a < 11)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}
