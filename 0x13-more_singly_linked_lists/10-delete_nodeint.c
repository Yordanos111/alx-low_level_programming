#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list
 * @head: the first node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
