#include <stdio.h>
#include <ctype.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'Z'; ch >= 'A'; ch--)
	{
		putchar(tolower(ch));
	}

	putchar('\n');

	return (0);
}

