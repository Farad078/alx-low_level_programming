#include "main.h"
#include <stdio.h>

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
	printf("%d\n", argc);
	while (*argv)
	{
		argv++;
	}

	return (0);
}
