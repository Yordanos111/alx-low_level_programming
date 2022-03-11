#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm;
	int letter;

	for (nm = '0'; nm <= '9'; nm++)
		putchar(nm);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
