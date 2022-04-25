#include "lists.h"
/**
 * listint_len - a function that returns
 * the number of elements in a linked listint_t list
 * @h: head of linked list
 * Return: Number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *st = h;

	while (st != NULL)
	{
		st = st->next;
		i++;
	}
	return (i);
}
