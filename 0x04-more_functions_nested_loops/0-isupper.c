#include <stdio.h>

/**
 * _isupper - Check stdio
 * @c: An input character
 * Description: function returns a value
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
