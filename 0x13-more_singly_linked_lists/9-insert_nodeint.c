#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: the head of the link
 * @idx:  is the index of the list where the new node should be added where
 * it starts at 0
 * @n: node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *iter;
	unsigned int poll = 1;

	if (head)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		if (idx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (poll == idx)
				{
					newnode->next = iter->next;
					iter->next = newnode;
					return (newnode);
				}
				iter = iter->next;
				poll++;
			}
			if (idx > poll)
				return (NULL);
		}
		else
		{
			newnode->next = *head;
			*head = newnode;
		}
		return (newnode);
	}
	return (NULL);
}
