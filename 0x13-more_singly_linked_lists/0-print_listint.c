#include "lists.h"

/**
 * print_listint - check here
 * @h: pointer to input
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
