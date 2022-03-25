#include "main.h"

/**
 * print_number - prints intergers
 * @n: takes interger
 * @p: int
 * Return: no argumnt
 */
void print_number(int n)
{
	unsigned int num;
	
	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
