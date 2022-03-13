#include <stdio.h>

/**
 * main - Prints combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm;
	int ld;
	int sd;
	int fd;

	for (nm = 0; nm <= 999; nm++)
	{
		fd = nm / 100;
		sd = (nm / 10) % 10;
		ld = nm % 10;
		if (fd < sd && sd < ld)
		{
		putchar(fd + '0');
		putchar(sd + '0');
		putchar(ld + '0');
		}
		if (fd < sd && sd < ld && nm < 789)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
