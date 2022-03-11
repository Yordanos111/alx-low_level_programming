#include <stdio.h>

/**
 * main - Prints combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm;

	for (nm = 1; nm <= 89; nm++)
	{
		putchar((nm / 10) + '0');
		putchar((nm % 10) + '0');
		if (nm == 89)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
