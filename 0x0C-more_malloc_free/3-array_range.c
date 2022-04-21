#include "main.h"
#include <stdlib.h>
/**
  *array_range - function that creates an array of ints
  *@min: the minimum value
  *@max: thw maximum value
  *Return: pointer
  */
int *array_range(int min, int max)
{
	int n, i;
	int *a;

	n = 0;

	if (min > max)
		return (NULL);

	n = ((max + 1) - min);

	a = malloc(n * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(a + i) = min + i;
	}

	return (a);
}

