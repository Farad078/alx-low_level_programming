#include "main.h"

/**
 * _strcpy - a function that copies the string pointed by src,
 * including the terminating null byte,
 * to the buffer pointed to by
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
