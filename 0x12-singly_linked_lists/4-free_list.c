#include "lists.h"
#include "stdlib.h"
/**
 * free_list - a function that frees  a list_t list
 * @head: head of linked list
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *s;

	while (head != NULL)
	{
		s = head;
		head = head->next;
		free(s->str);
		free(s);
	}
}
