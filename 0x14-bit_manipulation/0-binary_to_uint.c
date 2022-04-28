#include "main.h"
#include <string.h>
/**
 * _stoi -  a function that converts chars to ints
 * @c: the char to convert
 * Return: the converted int
 */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
 * binary_to_uint -  a function that converts
 * a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or
 * 0 if there is one or more chars in the
 * string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value;
	unsigned int conv;
	unsigned int final;

	if (!b)
		return (0);
	value = conv = 0;
	final = 1;
	for (i = strlen(b) - 1; b[i]; i--, final *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		conv = _stoi(b[i]);
		value += conv * final;
	}
	return (value);
}
