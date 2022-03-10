#include <stdio.h>
#include <unistd.h>

/**
 * main - Entery point
 *
 * Return: Aways 1
 */
int main(void)
{
	int i;
	int l;

	i = 1;
	l = 59;

	write(i, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", l);
	return (1);
}
