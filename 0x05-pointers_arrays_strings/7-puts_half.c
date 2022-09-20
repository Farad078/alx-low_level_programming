#include "main.h"

/**
 * puts_half - check main
 * Description: a function that prints half of a string
 * @str: input string
 * return: Nothing
 */

void puts_half(char *str)
{
	int x, y;
	int len = 0;
	int j = 0;

	for (; *(str + j) != '\0'; j++)
	{
		len++;
	}
	len = len - 1;

	if (len % 2 == 0)
	{
		x = (len / 2) + 1;
		for (; x <= len; x++)
		{
			_putchar(*(str + x));
		}
	}
	else
	{
		y = ((len - 1) / 2) + 2;
		for (; y <= len; y++)
		{
			_putchar(*(str + y));
		}
	}

	_putchar('\n');
}
