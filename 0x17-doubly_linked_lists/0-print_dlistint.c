#include "lists.h"

/**
 * print_dlistint - check main
 * Description: a function that prints all the elements of a list
 * @h: a pointer to a node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
