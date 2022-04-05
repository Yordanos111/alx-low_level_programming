#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns two dimensional array of ints
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	r = malloc(height * sizeof(int *));
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		r[i] = malloc(width * sizeof(int));
		if (r[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(r[i]);
			free(r);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			r[i][j] = 0;

	return (r);
}
