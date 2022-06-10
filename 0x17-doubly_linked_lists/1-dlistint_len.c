#include "lists.h"

/**
 * dlistint_len - returns the number of eiement in
 * a double linked list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
