#include "main.h"

/**
 * print_most_numbers - print 0 to 9 without 2 and 4
 * @void: no argument
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
