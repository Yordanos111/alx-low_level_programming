#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
