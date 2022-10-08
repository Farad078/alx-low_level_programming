#include "main.h"

/* Prototype */
int mul(int num1, int num);

/**
 * main - check the code
 *
 * @argc: input integer
 * @argv: input character
 * Return: Always returns 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, i = 0;
	char error[] = "Error";
	int x;

	if ((argc == 3) && (atoi(argv[1]) >= 0) && (atoi(argv[2]) >= 0))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		x = mul(num1, num2);
		printf("%d\n", x);
	}
	else if ((argc != 3) || ((atoi(argv[1]) >= 0) || (atoi(argv[2]) >= 0)))
	{
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		_putchar('\n');
		exit(98);
	}
	return (0);
}

/**
 * mul - function
 * Description: a program that multiplies two positive numbers
 * @num1: input unsigned integer
 * @num2: input unsigned integer
 * Return: returns char
 */

int mul(int num1, int num2)
{
	if (num1 > 0 && num2 > 0)
		return (num1 * num2);
	return (0);
}
