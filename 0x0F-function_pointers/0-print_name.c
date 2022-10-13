#include "function_pointers.h"

/**
 * print_name - check main
 * Description: a function that prints a name.
 * @name: pointer to a string.
 * @f: pointer to a function.
 * Return: returns Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (**func)(char *);
	char **temp;

	if ((name == NULL) || (f == NULL))
		return;

	temp = &name;
	func = &f;
	(*func)(*temp);
}
