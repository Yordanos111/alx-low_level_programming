#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list
 * @head: the head node
 * Return: the head node’s data (n) or
 * return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmdel;

	if (head == NULL)
		return (0);
	tmdel = *head;
	if (tmdel->next == NULL)
	{
		i = tmdel->n;
		free(tmdel);
		return (i);
	}
	i = tmdel->n;
	*head = (*head)->next;
	free(tmdel);
	return (i);
}
