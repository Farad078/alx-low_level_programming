#include <stdio.h>

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

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	for (ch ='A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
