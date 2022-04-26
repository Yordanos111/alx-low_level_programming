#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - .a function that returns the sum of all
  * the data (n) of a listint_t linked list
  * @head: head of linked list
  * Return: the sum of all the data (n) of a listint_t or
  * 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int value = 0;

	if (head)
	{
		while (head)
		{
			value += head->n;
			head = head->next;
		}
	}

	return (value);
}
