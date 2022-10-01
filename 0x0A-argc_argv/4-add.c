#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a main function
 * Description: a program that add to infinity,
 * followed by a new line
 * @argc: argument counter
 * @argv: a pointer argument
 * Return: 0 always succeed
 */

int main(int argc, char *argv[])
{
	int x = 0, i = 1;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				x += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (x > 0)
			printf("%d\n", x);
	}
	else
	{
		printf("%d\n", x);
	}
	return (0);
}
