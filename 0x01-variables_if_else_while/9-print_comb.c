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
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

