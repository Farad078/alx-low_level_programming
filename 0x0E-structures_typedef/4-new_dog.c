#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check dog
 * Description: a function that creates a new dog
 * @name: a pointer to character
 * @age: a pointer to float
 * @owner: a point to character
 * Return: returns a struct type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
