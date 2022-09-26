#include "main.h"

/**
 * _strchr - check main
 * Description: a function that locates a character in a string
 * @s: input pointer to string
 * @c: input character
 * Return: returns a pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
