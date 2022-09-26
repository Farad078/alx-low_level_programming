#include "main.h"

/**
 * _strncpy - a function that copies the string pointed by src,
 * including the terminating null byte,
 * to the buffer pointed to by
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: input integer
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *opt = dest;
	int i;


	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (opt);
}
