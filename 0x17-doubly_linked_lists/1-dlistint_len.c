#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - counts number of nodes
 * @h: the node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
