#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = (*head);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = last;
		last->next = new_node;
	}
	(*head) = new_node;
	return (*head);
}
