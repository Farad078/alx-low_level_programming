#include "main.h"

/* Prototypes */
unsigned int _pow(int x, int index);

/**
 * binary_to_uint - check main for prototype
 * Description: a function that converts a binary
 * number to an unsigned int.
 * @b: a pointer to string
 * Return: returns a converted number or 0 if
 * there is one or more chars in the string that's
 * not 0 or 1 or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	const char *ptr;
	int i = 0, k, len = 0;
	int b_sum = 0;

	for (; b[i] != '\0'; i++)
	{
		len++;
	}
	
	ptr = malloc(sizeof(char) * len);
	ptr = b;
	i = 0;
	k = len;
	k--;	

	for (; i < len; i++)
	{
		if ((b != NULL) && ((b[i] == '1') || (b[i] == '0')))
		{
			b_sum += ((ptr[i] - '0') * _pow(2, k));
			k--;
		}
		else
			return 0;
	}

	return (b_sum);
}


unsigned int _pow(int x, int index)
{
	int i = 1, mult = 1;

	if (index <= 0)
	{
		mult = 1;
	}
	else
	{
		for (; i <= index; i++)
		{
			mult *= x;
		}
	}
	return mult;
}
