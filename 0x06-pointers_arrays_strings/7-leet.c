#include "main.h"

/**
 * leet - check main
 * Description: a function that encodes
 * a string into 1337
 * @s: input string
 * Return: returns a character
 */

char *leet(char *s)
{
	int i, j;
	char alpha[10] = {'A', 'a', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = subs[j];
			}
		}
	}
	return (s);
}
