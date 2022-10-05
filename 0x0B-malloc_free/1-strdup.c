#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - check main
 * Description: a function that returns a pointer to a
 * newly allocated space in memory. which contains a copy
 * of the string given as a parameter.
 * @str: a pointer to a string
 * Return: a pointer to a string
 */

char *_strdup(char *str)
{
	unsigned int n = 0;
	char *t;
	unsigned int i = 0, j = 0;

	while (str[j] != '\0')
	{
		n++;
		j++;
	}

	t = (char *)malloc((n + 1) * sizeof(char));

	for (; i < n; i++)
	{
		t[i] = str[i];
	}
	t[i] = '\0';

	if (t == NULL)
		return (NULL);
	else
		return (t);
}
