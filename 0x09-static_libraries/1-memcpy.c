#include "main.h"

/**
 * _memcpy - check main
 * Description: a function that copies memory area
 * @dest: input pointer to string
 * @src: input pointer to string
 * @n: input integer
 * Return: returns dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *final = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (final);
}
