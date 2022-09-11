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

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if ((ch != 'Q') && (ch != 'E'))
		{
			putchar(tolower(ch));
		}
	}

	putchar('\n');

	return (0);
}

