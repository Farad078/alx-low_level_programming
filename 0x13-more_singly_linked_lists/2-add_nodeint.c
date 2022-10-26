#include "lists.h"

/**
 * add_nodeint - check lists.h
 * Description: a function that adds a new node at the
 * begining of a listint_t list.
 * @head: a pointer to a pointer to an input
 * @n: integer input
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}
