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
	int c, k, q;

	for (c = '0'; c < '9'; c++)
	{
		for (k = c + 1; k <= '9'; k++)
		{
			for (q = k + 1; q <= '9'; q++)
			{
				if ((k != c) != q)
				{
					putchar(c);
					putchar(k);
					putchar(q);

					if (c == '7' && k == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
