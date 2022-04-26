#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: head of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		numb++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (numb);
}
