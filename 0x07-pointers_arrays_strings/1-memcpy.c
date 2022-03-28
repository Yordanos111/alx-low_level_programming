#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: bytes.
 * @src: to be copied.
 * @dest: memory area.
 * Return: returns dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
