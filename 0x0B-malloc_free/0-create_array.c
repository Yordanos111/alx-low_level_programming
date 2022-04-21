#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars & initializes it
 * @size: size of array
 * @c: stored charactor
 * Return: Null if fails, a pointer if passes
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
