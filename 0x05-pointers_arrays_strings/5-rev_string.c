#include "main.h"

/**
 * rev_string - print string in reverse
 * Description: a function that prints in reverse
 * @s: input string
 * return: Nothing
 */

void rev_string(char *s)
{
	int len, j;
	char ph;

	len = 0;
	for (j = 0; *(s + j) != '\0'; j++)
	{
		len++;
	}

	len = len - 1;
	j = 0;
	for (; len > j; len--)
	{
		ph = s[j];
		s[j++] = s[len];
		s[len] = ph;
	}
}
