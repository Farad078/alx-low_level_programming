#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - check lists.h
 * Description: a function that prints all the elements of a list_t list
 * @h: a pointer to a node
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	return (count);
}
