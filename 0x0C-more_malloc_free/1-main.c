#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Hello", "Mummy", 5);
	printf("%s\n", concat);
	printf("%ld\n", sizeof(concat[0]));
	free(concat);
	return (0);
}
