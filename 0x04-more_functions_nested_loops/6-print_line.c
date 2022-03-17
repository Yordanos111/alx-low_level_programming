#include "main.h"

/**
 * print_line - prints line
 *
 * @n: number of times to print _
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
	_putchar('\n');
}
