#include "main.h"

/**
 * string_nconcat - check main
 * Description: a function that concatenates two strings
 * @s1: pointer to input string
 * @s2: pointer to input string
 * @n: input integer
 * Return: returns a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int a = 0, b = 0, len = 0;

	while (s1[a] != '\0')
	{
		a++;
		len++;
	}

	while (b <= n)
	{
		b++;
		len++;
	}

	temp = (char *)malloc(len * sizeof(char));
	a = 0, b = 0;

	if (temp == NULL)
	return (NULL);
	while (s1[a] != '\0')
	{
		temp[a] = s1[a];
		a++;
	}

	while (b < n)
	{
		temp[a] = s2[b];
		a++;
		b++;
	}
	temp[a] = '\0';
	return (temp);
}
