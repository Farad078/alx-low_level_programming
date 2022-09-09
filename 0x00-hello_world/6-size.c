#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/* Generate different sizes of data types. */
char_size = sizeof(char);
int_size = sizeof(int);
long_int_size = sizeof(long int);
float_size = sizeof(float);

/* prints the size of a char */
printf("size of a char: %d", char_size, "byte(s)");

/* prints the size of an int */
printf("size of a char: %d", int_size, "byte(s)");

/* prints the size of a long int */
printf("size of a char: %d", long_int_size, "byte(s)");

/* prints the size of a float */
printf("size of a char: %d", float_size, "byte(s)");

return (0);
}
