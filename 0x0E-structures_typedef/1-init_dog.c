#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check dog
 * Description: a function that initializes a variable
 * @d: a pointer to an input of type struct dog
 * @name: input pointer to a character
 * @age: input of type float
 * @owner: input pointer to character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
