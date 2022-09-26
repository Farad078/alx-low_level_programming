#include "main.h"

/**
 * _memset - check main
 * Description: a function that fills memory with constant byte
 * @s: a pointer input
 * @b: an input character
 * @n: an input integer
 * Return: a pointer to a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s = b;
		s++;
	}
	return (s);
}
