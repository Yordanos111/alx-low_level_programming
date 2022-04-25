#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: the starting of linked list
 * @n: the value append
 * Return:  the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *traverse;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	traverse = *head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new;
	return (*head);
}
