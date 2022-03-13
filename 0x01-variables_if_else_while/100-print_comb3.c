#include <stdio.h>

/**
 * main - Prints combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm;
	int ld;
	int fd;

	for (nm = 1; nm <= 89; nm++)
	{
		ld = nm % 10;
		fd = nm / 10;
		if (fd > ld)
		{
			continue;
		}
		putchar(fd + '0');
		putchar(ld + '0');

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
