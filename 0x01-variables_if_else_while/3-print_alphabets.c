#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;
	int LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	putchar('\n');
	return (0);
}
