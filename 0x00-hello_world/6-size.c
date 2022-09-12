#include <stdio.h>

/**
 * main - Entry point
 *
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

/* prints the size of a char */
printf("size of a char: %1d byte(s)\n", sizeof(a));

/* prints the size of an int */
printf("size of an int: %1d byte(s)\n", sizeof(b));

/* prints the size of a long int */
printf("size of a long int: %1d byte(s)\n", sizeof(c));

/* prints the size of a long long int */
printf("size of a long long int: %1d byte(s)\n", sizeof(d));

/* prints the size of a float */
printf("size of a float: %1d byte(s)\n", sizeof(e));

return (0);
}
