#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, k;

	for (c = '0'; c < '9'; c++)
	{
		for (k = c + 1; k <= '9'; k++)
		{
			if (k != c)
			{
				putchar(c);
				putchar(k);

				if (c == '8' && k == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
