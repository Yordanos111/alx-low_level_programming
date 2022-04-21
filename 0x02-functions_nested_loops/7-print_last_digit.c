#include "main.h"

/**
 * print_last_digit - .rints the last digit of a number
 * @c: takes in a number
 * Return: ourput
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (c < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
