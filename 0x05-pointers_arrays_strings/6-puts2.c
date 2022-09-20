#include "main.h"

/**
 * puts2 - chech main
 * Description: a function that prints every other character
 * @str: input string
 * return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
