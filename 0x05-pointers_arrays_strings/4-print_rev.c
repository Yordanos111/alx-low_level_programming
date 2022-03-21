#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: takes in string
 */
void print_rev(char *s)
{
	int i;

	int string_length(char *pointer);

	i = string_length(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/**
  * string_length - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
