#include "main.h"

/**
 * _strspn - check main
 * Description: a function tha gets the length of a prefix substring
 * @s: input pointer to string
 * @accept: input pointer to string
 * Return: returns an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	char *start = accept;

	while (*s)
	{
		j = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				j = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (j == 0)
		{
			break;
		}
	}
	return (i);
}
