#include "main.h"

/**
 * _puts_recursion - check main
 * Description: a function that prints a string
 * @s: a pointer to a string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
