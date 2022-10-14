#include "3-calc.h"

/**
 * op_add - check 3-calc
 * Description: a function that gives a sum
 * @a: input integer
 * @b: input integer
 * Return: returns an integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - check 3-calc
 * Description: a function that gives a subtraction
 * @a: input integer
 * @b: input integer
 * Return: returns an integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - check 3-calc
 * Description: a function that gives a multiply
 * @a: input integer
 * @b: input integer
 * Return: returns an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - check 3-calc
 * Description: a function that gives a division.
 * @a: input integer
 * @b: input integer
 * Return: returns an integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - check 3-calc
 * Description: a function that gives a multiply
 * @a: input integer
 * @b: input integer
 * Return: returns an integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
