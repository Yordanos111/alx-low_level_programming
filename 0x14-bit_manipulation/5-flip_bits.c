#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int (to transfer from)
 * @m: unsigned long int (to transfer to)
 * Return: unsigned long int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int amount;

	amount = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			amount++;
	return (amount);
}
