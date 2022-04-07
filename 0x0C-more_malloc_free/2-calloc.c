#include "main.h"
#include <stdlib.h>
/**
  * _calloc - function that allocates memory of an array
  * @nmemb: number of elements in array
  * @size: size of elements of array
  * Return: NULL or pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(a) + i) = 0;
	}

	return (a);
}
