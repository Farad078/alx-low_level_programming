#include <stdio.h>

/**
 * main - Entry point
 * Description: Using the main function
 * This program prints the size of data types
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Generate different sizes of data types. */
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("size of a char: %1d byte(s)\n", sizeof(a));
	printf("size of an int: %1d byte(s)\n", sizeof(b));
	printf("size of a long int: %1d byte(s)\n", sizeof(c));
	printf("size of a long long int: %1d byte(s)\n", sizeof(d));
	printf("size of a float: %1d byte(s)\n", sizeof(e));
	return (0);
}
