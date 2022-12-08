#include "lists.h"

/**
 * dlistint_len - check main
 * Description: a function that prints all the elements of a list
 * @h: a pointer to a node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
