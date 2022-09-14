#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function returns a value
 * Return: 1 if is alphabet or 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

