#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory
  * @b: memory to be allocated
  * Return: 98
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
