#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(S)\n", sizeof(int));
	printf("Size of a long int: %i byte(S)\n", sizeof(long int));
	printf("Size ofa long long int: %ibyte(s)\n", sizeof(long long int));
	printf("Size of a float: %ibytes(s)\n", sizeof(float));
	return (0);
}
