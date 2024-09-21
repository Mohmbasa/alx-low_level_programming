#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint -  adds a node to the front of the list
 * @head: the list
 * @n: the value of the node to be added
 *
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (*head);
}
