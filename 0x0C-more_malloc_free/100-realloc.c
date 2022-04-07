#include "main.h"
#include <stdlib.h>
/**
  * _realloc - function that reallocates a memory block
  * @ptr: pointer to the memory
  * @old_size: size in bytes allocated for ptr
  * @new_size: size in bytes of new memory block
  * Return: NULL OR ptr OR new
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		new = malloc(new_size);
		if (new == NULL)
			return (new);
		for (i = 0; i < old_size; i++)
			new[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (new);
}
