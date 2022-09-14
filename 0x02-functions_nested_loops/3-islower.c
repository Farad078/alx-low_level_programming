#include "main.h"

/**
 * _islower - Check main
 * @c: An input character
 * Description: function returns a value
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
