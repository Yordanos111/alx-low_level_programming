#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number of characters to be copied
 * Return: desk
 */
char *_strncpy(char *dest, char *src, int n)
{
	stpncpy(dest, src, n);
	return (dest);
}
