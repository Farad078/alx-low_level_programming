#include <stdio.h>

/**
 * main - Entry point
 * Description: Using the main function
 * This program prints the size of data types
 * Return: 0
 */

int main(void)
{
        char c;
        int i;
        long int li;
        long long lli;
        float f;

        printf("size of a char: %1d byte(s)\n", sizeof(c));
        printf("size of an int: %1d byte(s)\n", sizeof(i));
        printf("size of a long int: %1d byte(s)\n", sizeof(li));
        printf("size of a long long int: %1d byte(s)\n", sizeof(lli));
        printf("size of a float: %1d byte(s)\n", sizeof(f));
        return (0);
