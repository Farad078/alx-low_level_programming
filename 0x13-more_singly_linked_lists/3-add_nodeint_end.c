#include "lists.h"

/**
 * add_nodeint_end - check lists.h
 * Description: a function that adds a new node at the
 * begining of a listint_t list.
 * @head: a pointer to a pointer to an input
 * @n: integer input
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (node);
}
