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
	listint_t *del;
	int all;

	if (*head == NULL)
		return (0);

	del = *head;
	*head = del->next;
	all = del->n;
	free(del);
	return (all);
}
