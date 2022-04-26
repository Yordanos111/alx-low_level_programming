#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		} else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
