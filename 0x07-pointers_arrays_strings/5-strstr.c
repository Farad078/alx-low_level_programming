#include "main.h"

/**
 * _strstr - check main
 * Description: a function that locates a substring
 * @haystack: an input pointer to character
 * @needle: an input pointer to character
 * Return: returns a character
 */

char *_strstr(char *haystack, char *needle)
{
	char *str = needle;
	char *str_ = haystack;

	while (*haystack)
	{
		str_ = haystack;
		needle = str;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = str_ + 1;
	}
	return (NULL);
}
