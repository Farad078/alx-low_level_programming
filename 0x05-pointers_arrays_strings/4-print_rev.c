#include "main.h"

/**
 * print_rev - print string in reverse
 * Description: a function that prints in reverse
 * @s: input string
 * return: Nothing
 */

void print_rev(char *s)
{
	int len, j;

	len = 0;
	for (j = 0; *(s + j) != '\0'; j++)
	{
		len++;
	}

	j = 0;
	for (; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');

}
