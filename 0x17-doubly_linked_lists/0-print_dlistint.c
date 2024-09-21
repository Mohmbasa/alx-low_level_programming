#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints values of the nodes
 * @h: the node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
