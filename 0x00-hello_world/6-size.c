#include <stdio.h>

/**
 * main - Entrry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c;
	int i;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(S)\n", sizeof(i));
	printf("Size of a long int: %lu byte(S)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llt));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
