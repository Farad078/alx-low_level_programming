#include "main.h"

/**
 * _isdigit - Check main
 * @c: An input character
 * Description: function returns a value
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
