#include "lists.h"

/**
 * add_dnodeint - check main
 * Description: a function that adds a new node at the begining of list
 * @head: a pointer to a pointer to a node
 * @n: constant integer
 * Return: returns the address of new element or NULL if it failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new;

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);

        new->n = n;
        new->prev = NULL;
        new->next = *head;
        if (*head != NULL)
                (*head)->prev = new;
        *head = new;

        return (new);
}
