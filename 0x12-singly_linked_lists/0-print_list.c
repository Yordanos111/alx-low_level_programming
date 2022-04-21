#include "lists.h"
#include <stdio.h>

/**
 * size_t print_list - function that prints all
 * the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0, len;
	char *s;
	const list_t *traverse = h;

	while (traverse != NULL)
	{
		s = traverse->str;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
			traverse = traverse->next;
			i++;
			continue;
		}
		len = traverse->len;
		printf("[%ld] %s\n", len, s);
		traverse = traverse->next;
		i++;
	}
	return (i);
}
