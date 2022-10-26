#include "lists.h"

/**
 * listint_len - check here
 * Description: a function that returns the number
 * of element in a linked listint_t list.
 * @h: pointer to input
 * Return: returns number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
