#include <stdio.h>

/**
 * main - prints all lowercase alphabets exept q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
