#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer.
 * @b: constant byte.
 * @n: the first byte of memory.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
