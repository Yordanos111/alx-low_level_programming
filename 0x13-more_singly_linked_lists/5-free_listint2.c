#include "lists.h"
#include "stdlib.h"
/**
 * free_listint2 - a function free list_t
 * @head: the head of linked list
 * Return: No argument
 */
void free_listint2(listint_t **head)
{
	listint_t *tmtofr;
	listint_t *st;

	if (head == NULL)
		return;
	st = (*head);
	while (st != NULL)
	{
		tmtofr = st;
		st = st->next;
		free(tmtofr);
	}
	*head = NULL;
}
