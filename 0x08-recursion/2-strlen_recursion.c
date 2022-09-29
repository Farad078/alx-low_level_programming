#include "main.h"

/**
 * _print_strlen_recursion - check main
 * Description: a function that returns the length of a string.
 * @s: input pointer to string
 * Return: returns an integer
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
