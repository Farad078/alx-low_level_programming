#include <stdlib.h>
#include "main.h"

/**
 * str_concat - check main
 * Description: a function that concatenates two strings
 * @s1: a pointer to a character
 * @s2: a pointer to a character
 * Return: returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k = 0, temp = 0, len;
	char *t;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j;

	t = malloc((len + 1) * sizeof(char));
	if (t != NULL)
	{
		while (k < i)
		{
			t[k] = s1[k];
			k++;
		}
		while (temp < j)
		{
			t[k] = s2[temp];
			k++;
			temp++;
		}
		t[k] = '\0';
		return (t);
	}
	else
		return (NULL);

}
