#include "main.h"
int check_separators(char c);

/**
 * cap_string - check main
 * Description: a function that changes all lowercase
 * letters of a string to uppercase
 * @s: input string
 * Return: char pointer to converted string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}

		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
                {
                        s[i + 1] = s[i + 1] - 32;
                }

		i++;
	}
	return(s);
}

/**
 * check_separators - to check separators
 * Description: a function that check for separtors
 * @c: input character
 * Return: 1 otherwise 0
 */

int check_separators(char c)
{
	int i = 0;
	char k[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	
	for (; i < 13; i++)
	{
		if (c == k[i])
		{
			return(1);
		}
	}
	return(0);
}
