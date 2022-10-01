#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a main function
 * Description: a program that prints its name,
 * followed by a new line
 * @argc: argument counter
 * @argv: a pointer argument
 * Return: 0 always succeed
 */

int main(int argc, char *argv[])
{
	int x = 1, i = 1;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			x *= atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
