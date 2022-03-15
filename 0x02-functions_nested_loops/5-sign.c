#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: takes a number (sign of a number)
 * Return: 1 and prints + if n is greater than zero, 0 and prints 0 if n is 0, returns -1 and prints -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar (-1);
		return (-1);
	}
}
