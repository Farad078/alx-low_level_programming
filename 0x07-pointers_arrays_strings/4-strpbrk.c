#include "main.h"

/**
 * _strpbrk - check main
 * Description: a function that searches a string for any of a set of bytes
 * @s: input pointer to character
 * @accept: input pointer to character
 * Return: return a pointer to a character
 */

char *_strpbrk(char *s, char *accept)
{
	char *strt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;

		}
		accept = strt;
		s++;
	}
	return (NULL);
}
