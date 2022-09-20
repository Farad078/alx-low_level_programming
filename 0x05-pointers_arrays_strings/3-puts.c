#include "main.h"

/**
 * _puts - print a string of character
 * Description: a function that prints a string followed by a new line
 * @str: input string
 * return: Nothing
 */

void _puts(char *str)
{
	int j;

	j = 0;
	for (; *(str + j) != '\0'; j++)
	{
		_putchar(*(str + j));
	}

	_putchar('\n');
}
