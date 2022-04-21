#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: takes in the first intiger
 * @b: takes in the second intiger
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
