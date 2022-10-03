#include "main.h"

/**
 * _strlen - Check main
 * Description: function returns a value
 * @s: input a string
 * Return: always returns length of a string
 */


int _strlen(char *s)
{
	int j = 0;
	int k = 0;

	for (; *(s + k) != '\0'; k++)
	{
		j++;
	}
	return (j);
}
