#include "lists.h"
#include "stdlib.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: the head of linked list
 * Return:No argument
 */
void free_listint(listint_t *head)
{
	listint_t *tmtofr;

	while (head != NULL)
	{
		tmtofr = head;
		head = head->next;
		free(tmtofr);
	}
}
