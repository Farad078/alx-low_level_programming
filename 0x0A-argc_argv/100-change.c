#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* function prototype */
int check(int x);

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
	if (argc == 2)
	{
		printf("%d\n", check(atoi(argv[1])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * check - check the prototype
 * Description: a function that calculate change in cent
 * @x: input integer
 * Return: returns integer
 */

int check(int x)
{
	int z = 0;

	while (x > 0)
	{
		if (x > 24)
		{
			x = x - 25;
			z++;
		}
		else if (x > 9)
		{
			x = x - 10;
			z++;
		}
		else if (x > 4)
		{
			x = x - 5;
			z++;
		}
		else if (x > 1)
		{
			x = x - 2;
			z++;
		}
		else
		{
			x = x - 1;
			z++;
		}
	}
	return (z);

}
