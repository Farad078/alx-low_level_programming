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
	int c;
	int a;
	int k = 1;

	for (c = '0'; c <= '8'; c++)
	{
		for (a = '1'; a <= '9'; a++)
		{
			putchar(c);
			putchar(a);

			if (k < 81)
			{
				putchar(',');
				putchar(' ');
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}

