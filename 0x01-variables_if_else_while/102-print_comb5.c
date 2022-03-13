#include <stdio.h>

/**
 * main - Prints combinations of two combinations od two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int fdi;
	int ldi;
	int fdj;
	int ldj;

	for (i = 0; i <= 99; i++)
	{
		fdi = i / 10;
		ldi = i % 10;

		for (j = 0; j <= 99; j++)
		{
			fdj = j / 10;
			ldj = j / 10;

			if (fdi < fdj || (fdi == fdj && ldi < ldj))
			{
				putchar(fdi + '0');
				putchar(ldi + '0');
				putchar(' ');
				putchar(fdj + '0');
				putchar(ldj + '0');

				if (!(fdi == 9 && ldi == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

