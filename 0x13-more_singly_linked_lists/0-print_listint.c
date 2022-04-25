#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints elements of a listint_t list
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *traverse = h;

	while (traverse != NULL)
	{
		printf("%d\n", traverse->n); /*printf is allowed for this task*/
		i++;
		traverse = traverse->next;
	}
	return (i);
}
